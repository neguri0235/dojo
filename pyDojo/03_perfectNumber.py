import unittest

def perfect(n):
    result = 0
    for i in range(1,n+1):
        for j in range(1,i):
            if i%j == 0:
                result += j
        if result == i:
            print (result)
            print ("%d" % (result))

perfect(28)