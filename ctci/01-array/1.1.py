import unittest

def solve(string):
    if string == "hello":
        print('A')
        return True
    else:
        print('B')
        return False
class Test(unittest.TestCase):
    def test_t1(self):
        r = solve("hello")
        self.assertTrue(r)
    
    def test_t2(self):
        r = solve("hell")
        self.assertFalse(r)
if __name__ == "__main__":
    unittest.main()