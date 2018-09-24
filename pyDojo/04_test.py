import unittest
import diffsquaresum

class dTest(unittest.TestCase):
    def t1(self):
        r = diffsquaresum.diff(10)
        self.assertEqual(r,2640)

    def t2(self):
        r = diffsquaresum.diff(100)
        self.assertEqual(r,25164150)

if __name__ == '__main__':
    unittest.main()