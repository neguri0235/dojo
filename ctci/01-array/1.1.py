import unittest

def solve(string):
    if string == "hello":
        print('A')
        return True
    else:
        print('B')
        return False

class pTest(unittest.TestCase):
    def t1(self):
        r = solve("hello")
        self.assertTrue(r)
    
    def t2(self):
        r = solve("hell")
        self.assertFalse(r)

if __name__ == '__main__':
    unittest.main()