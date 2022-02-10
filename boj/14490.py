import sys

#100:10
a, b = map(int, sys.stdin.readline().split(':'))

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b,a%b)

#if a > b:
#    a, b = b, a
p = gcd(a,b)
a = a//p
b = b//p
print(f'{a}:{b}')