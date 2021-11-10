import difflib
import os
import shutil
import sys
import types
import unittest

from iegen.common.config import config
from iegen.context_manager.ctx_desc import ContextDescriptor
from iegen.runner import run
from .utils import filter_iegen_date_line

SCRIPT_DIR = os.path.dirname(os.path.realpath(__file__))


class TestFilesIdentical(unittest.TestCase):

    def setUp(self) -> None:
        self.test_dir = os.getcwd()
        self.gen_root = './%s/'
        self.examples_root = os.path.join(SCRIPT_DIR, '../../examples/primitives/%s/')
        self.languages = ['python', 'kotlin', 'swift']
        TestFilesIdentical._prepare_config_and_examples()

    def tearDown(self) -> None:
        # remove added config
        del config.application.context_def_glob
        os.chdir(self.test_dir)
        # clear all generate file
        shutil.rmtree('tmp')

    def test_files_are_identical(self):
        ctx_desc = ContextDescriptor(config.application.context_def_glob)

        # run iegen
        run(types.SimpleNamespace(plat_lang_options=self.languages), ctx_desc)

        # compare generated files with golden ones
        diff_per_language = {}
        for language in self.languages:
            print(language.upper())
            diff_files = []
            gen_root = self.gen_root % language
            examples_root = self.examples_root % language
            for root, _, files in os.walk(gen_root):
                common_path = root[len(gen_root):]
                for file in files:
                    # TODO remove this if there will be a proper solution for std exceptions order
                    if 'std_exc_classes' in file:
                        continue
                    examples_file = os.path.join(examples_root, common_path, file)
                    gen_file = os.path.join(root, file)
                    print(f'comparing {examples_file}, {gen_file}')
                    with open(examples_file, "rt") as f1:
                        with open(gen_file, "rt") as f2:
                            f1 = filter(filter_iegen_date_line, f1)
                            f2 = filter(filter_iegen_date_line, f2)
                            identical = all(x == y for x, y in zip(f1, f2))
                            if not identical:
                                diff_files.append((gen_file, examples_file))
            if diff_files:
                diff_per_language[language] = diff_files
                # log first 3 files diff for each language
                for diff_pair in diff_files[:3]:
                    with open(diff_pair[0], 'r') as gf:
                        with open(diff_pair[1], 'r') as ef:
                            sys.stderr.write(f'Diff for {diff_pair[0]} - {diff_pair[1]}')
                            sys.stderr.writelines(difflib.unified_diff(gf.readlines(), ef.readlines()))
        if diff_per_language:
            raise AssertionError

    @staticmethod
    def _prepare_config_and_examples():
        # set context_def_glob according to examples
        config.application.context_def_glob = 'cxx/**/*iegen.yaml'
        os.makedirs('tmp')
        os.chdir('tmp')
        # copy example sources and config
        shutil.copytree(os.path.join(SCRIPT_DIR, '../../examples/primitives/cxx'), './cxx')
        shutil.copyfile(os.path.join(SCRIPT_DIR, '../../examples/primitives/iegen_config.cfg'), './iegen_config.cfg')


if __name__ == '__main__':
    unittest.main()
