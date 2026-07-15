def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

# 测试
import unittest

class TestFactorial(unittest.TestCase):

    def test_factorial(self):
        self.assertEqual(factorial(0), 1)