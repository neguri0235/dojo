import sys
import bisect
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
a = list(map(int, sys.stdin.readline().split()))

L = [ 1 for i in range(1002)]
R = [ 1 for i in range(1002)]

for i in range(1,n):
    for j in range(0,i+1):
        if a[i] > a[j] and L[j] >= L[i]:
            L[i] += 1

l = max(L)

if dbg:
    for i in range(10):
        print(L[i], end = ' ')
    print()      

for i in range(n-2, -1, -1):
    for j in range(n-1, i, -1):
        if a[i] > a[j] and R[j] >= R[i]:
            R[i] += 1
r = max(R)
if dbg:
    for i in range(10):
        print(R[i], end = ' ')
    print()


ans = 0
for i in range(n):
    ans = max(ans,R[i] + L[i])
print(ans-1)    
