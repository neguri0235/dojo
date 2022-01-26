import sys
import bisect
dbg = 1
#if dbg: sys.stdin = open('in.txt','r')

n = int(input())
a = list(map(int, sys.stdin.readline().split()))

L = []
R = []

for e in a:
    idx = bisect.bisect_left(L,e)
    if idx == len(L):
        L.append(e)
    else:
        L[idx] = e 

l, r = 0, 0
while l < len(L):

    if L[l] == a[r]:
        l += 1
        r += 1
    else:
        r += 1

if dbg: print(l,r)


for e in range(r, len(a)):
    idx = bisect.bisect_left(R, -a[e])
    if idx == len(R):
        R.append(-a[e])
    else:
        R[idx] = -a[e]

if dbg:
    print(L)
    print(R)
print(len(L)+len(R))