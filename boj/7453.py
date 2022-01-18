import sys
import bisect
import collections

dbg = True
if dbg: sys.stdin = open('in.txt','r')

n = int(sys.stdin.readline())
a = [[0 for i in range(n)] for j in range(n)]

A, B, C, D = [], [], [], []

for i in range(n):
    w, x, y, z = map(int, sys.stdin.readline().split())
    A.append(w)
    B.append(x)
    C.append(y)
    D.append(z)

p = 0

left = collections.defaultdict(int)
right = collections.defaultdict(int)

for i in range(n):
    for j in range(n):
        left[A[i] + B[j]] += 1
        right[C[i] + D[j]] += 1

ans = 0

for e in left:
    if -e in right:
        ans += left[e] * right[-e]

print(ans)