import sys
import math

dbg = 0

n = sys.stdin.readline().rstrip()
s = list(n)
n = int(n)

p1 = False
p2 = False

if '3' in s or '4' in s or '7' in s:
    print('no')
else:
    s.reverse()
    for i in range(len(s)):
        if s[i] == '6':
            s[i] = '9'
        elif s[i] == '9':
            s[i] = '6'
        else:
            pass
    s = ''.join(s)
    m = int(s)


    def isPrime(p):
        k = int(math.sqrt(p))+1
        if p == 1:
            return False
        for i in range(2,k):
            if p % i == 0:
                return False
        return True

    p1 = isPrime(n)
    p2 = isPrime(m)

    if p1 and p2:
        print('yes')
    else:
        print('no')
