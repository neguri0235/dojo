import sys
n, k = map(int, sys.stdin.readline().split())

mod = 1000000007

def pow(a, b):
    if b == 0: return 1
    if b%2 > 0:
        return (pow(a, b-1))*a % mod

    half = pow(a, b//2)%mod
    return (half * half) %mod

def bino_coef(n, k):

    a, b = 1, 1

    for i in range(1,n+1):
        a *= i
        a %= mod
    
    for i in range(1,k+1):
        b *= i
        b %= mod
    
    for i in range(1, (n-k)+1):
        b *= i
        b %= mod

    b2 = pow(b, mod-2)
    result = a * b2

    result %= mod

    return result

print(bino_coef(n,k))

