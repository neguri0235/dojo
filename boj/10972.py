import sys
import itertools


DG = False
if DG: sys.stdin = open('in.txt','r')

n = int(input())
a = list(map(int, sys.stdin.readline().split()))

if DG: print(a)

b = sorted(a, reverse=True)
if DG: print(b)
if a == b:
    print(-1)
else:
    p = itertools.permutations(a)
    next(p)
    q = list(next(p))
    for e in q:
        print(e, end = ' ')
