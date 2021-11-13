import torch
import re
import unittest
import tensorflow as tf

class SetupTest(unittest.TestCase):

    def test_torch_setup(self):
        version = torch.__version__
        pattern = "(\d+\.)+(\d)+"
        self.assertTrue(re.match(pattern, version))

    def test_tf_setup(self):
        version = tf.__version__
        pattern = "(\d+\.)+(\d)+"
        self.assertTrue(re.match(pattern, version))

if __name__ == '__main__':
    unittest.main()