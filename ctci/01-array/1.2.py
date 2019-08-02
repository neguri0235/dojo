'''
Check Permutation: Given two strings, write a method to decide if one is a permutation of the
other.
'''
# O(N)
import unittest


def solve(str1, str2):
    if len(str1) != len(str2):
        return False
    
    str1 = list(str1)
    str2 = list(str2)

    if str1.sort() == str2.sort():
        return True
    else:
        return False


class Test(unittest.TestCase):
    def test_permutation(self):

        actual = solve("hello","hello ")
        self.assertFalse(actual)

        actual = solve("hello","elhlo")
        self.assertTrue(actual)

if __name__ == "__main__":
    unittest.main()