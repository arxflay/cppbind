import os
import shutil
import unittest

from test.comparison_tests.utils import RunCompare

SCRIPT_DIR = os.path.dirname(os.path.realpath(__file__))


class TestHelloExampleFilesIdentical(unittest.TestCase):
    """Runs iegen for hello tutorial and compares generated bindings with the examples."""

    def __init__(self, methodName='runTest'):
        super().__init__(methodName=methodName)
        self.examples_root = os.path.abspath(os.path.join(SCRIPT_DIR, '../../../examples/tutorials/hello_user/'))
        self.runner = RunCompare(examples_root=self.examples_root,
                                 source_glob='cxx/*iegen.yaml')

    def setUp(self) -> None:
        self.runner.setup()
        # copy example sources and config to current tmp directory
        shutil.copytree(os.path.join(self.examples_root, 'cxx'), './cxx')
        shutil.copyfile(os.path.join(self.examples_root, 'iegen_config.cfg'), './iegen_config.cfg')

    def tearDown(self) -> None:
        self.runner.teardown()

    def test_run_compare(self):
        # run iegen
        self.runner.run()
        # compare generated bindings with golden ones
        self.runner.compare()


if __name__ == '__main__':
    unittest.main()