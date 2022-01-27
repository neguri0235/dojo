import sys
import bisect

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))

D = [ 0 for i in range(1002)]
D[0] = a[0]
for i in range(1,n):
    D[i] = a[i]
    for j in range(0,i+1):
        if i == j:
            continue
        if a[j] < a[i] and D[j]+a[i] >= D[i]:
            D[i] = a[i] + D[j]

if dbg:
    for i in range(0,10):
        print(D[i], end = ' ')
    print()
print(max(D))