import difflib
import os
import shutil
import sys
import types
import unittest
from unittest.mock import patch

from cppbind.common.config import config, CppBindConfig
from cppbind.context_manager.ctx_desc import ContextDescriptor
from cppbind.runner import run

SCRIPT_DIR = os.path.dirname(os.path.realpath(__file__))


class RunCompare:

    def __init__(self, examples_root, working_dir, languages=None):
        self.languages = languages or ['kotlin', 'swift', 'python']
        self.test_dir = os.getcwd()
        self.gen_root = './'
        self.examples_root = examples_root
        self.working_dir = working_dir

    def setup(self) -> None:
        os.makedirs(self.working_dir)
        os.chdir(self.working_dir)

    def setup_config(self):
        # load current config as it's copied during setup and was not available when loading the default config
        self.config_application = CppBindConfig(["cppbind_config.cfg"]).application
        for key, value in self.config_application.__dict__.items():
            tmp_value = getattr(self.config_application, key)
            if hasattr(config.application, key):
                setattr(self.config_application, key, getattr(config.application, key))
            setattr(config.application, key, tmp_value)

    def teardown(self) -> None:
        # revert config changes
        for key, value in self.config_application.__dict__.items():
            setattr(config.application, key, value)
        os.chdir(self.test_dir)
        # clear all generate files
        shutil.rmtree(self.working_dir)

    def run(self):
        # run cppbind with given config
        ctx_descriptor = ContextDescriptor(config.application.context_def_glob)
        # run cppbind

        with patch("cppbind.context_manager.ctx_desc.ContextDescriptor.get_var_def") as var_def_mock:
            # mock to get actual variables not only default ones
            var_def_mock.return_value = ctx_descriptor._ContextDescriptor__var_def
            run(types.SimpleNamespace(plat_lang_options=self.languages), ctx_descriptor)

    def compare(self):
        # compares files from current directory with the files of examples root directory
        # remove source to not compare
        source_path = self.gen_root + 'cxx'
        if os.path.exists(source_path) and os.path.isdir(source_path):
            shutil.rmtree(source_path)

        diff_files = []

        # compare generated files with golden ones
        for root, _, files in os.walk(self.gen_root):
            common_path = root[len(self.gen_root):]
            if not common_path.endswith('__pycache__'):
                for file in files:
                    # TODO remove this if there will be a proper solution for std exceptions order
                    if 'std_exc_classes' in file:
                        continue
                    examples_file = os.path.abspath(os.path.join(self.examples_root, common_path, file))
                    gen_file = os.path.abspath(os.path.join(root, file))
                    print(f'comparing {examples_file}, {gen_file}')
                    with open(examples_file, "rt") as f1:
                        with open(gen_file, "rt") as f2:
                            f1 = filter(filter_cppbind_date_line, f1)
                            f2 = filter(filter_cppbind_date_line, f2)
                            identical = all(x == y for x, y in zip(f1, f2))
                            if not identical:
                                diff_files.append((gen_file, examples_file))
        if diff_files:
            for diff_pair in diff_files[:3]:
                with open(diff_pair[0], 'r') as gf:
                    with open(diff_pair[1], 'r') as ef:
                        sys.stderr.write(f'Diff for {diff_pair[0]} - {diff_pair[1]}')
                        sys.stderr.writelines(difflib.unified_diff(gf.readlines(), ef.readlines()))
            raise AssertionError


def filter_cppbind_date_line(line):
    if 'generated by cppbind on' in line:
        return False
    return True


if __name__ == '__main__':
    unittest.main()
