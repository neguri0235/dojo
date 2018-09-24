import unittest

def perfect(n):
    print (n)
    for i in range(1,n+1):
        result = 0
        for j in range(1,i):
            if i % j == 0:
                result += j
        if result == i:
            print ("%d" % (result))

perfect(100)