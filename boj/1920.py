import sys
import collections

def bisect(a, x, lo=0, hi = None):
    if lo < 0:
        raise ValueError('lo must be non-negative')
    if hi is None:
        hi = len(a)
    while lo < hi:
        mid = (lo + hi) //2
        if a[mid] == x:
            return 1
        elif a[mid] < x:
            lo = mid+1
        else:
            hi = mid
    return 0

N = int(sys.stdin.readline())
D = list(map(int,sys.stdin.readline().split()))

N = int(sys.stdin.readline())
T = list(map(int,sys.stdin.readline().split()))

D = sorted(D)
#print(D)
for e in T:
    print(bisect(D,e,0,None))
