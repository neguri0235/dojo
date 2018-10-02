import unittest

def palin(start, end):
    result = 0
    for i in range(start,end):
        for j in range(start,end):
            if str(i*j) == str(i*j)[::-1] and i*j > result:
                result = i*j
    return result


class pTest(unittest.TestCase):

    def t100(self):
        r = palin(10,100)
        self.assertEqual(r,9009)
    
    def t1000(self):
        r = palin(100,1000)
        self.assertEqual(r,906609)


if __name__ == '__main__':
    unittest.main()