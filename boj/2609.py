import sys

def gcd(a,b):
    if b == 0:
        return a
    else:
        return gcd(b,a%b)

A,B = map(int,sys.stdin.readline().split())

N = gcd(A,B)
M = (A*B)//N

def gen():
    yield N
    yield M

for n in gen():
    print(n)