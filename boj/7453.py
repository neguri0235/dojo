import sys
import bisect
import collections

dbg = True
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
a = []
for _ in range(n):
    b = list(map(int, sys.stdin.readline().split()))
    a.append(b)

left = [0 for i in range(n*n)]
p = 0

d = collections.defaultdict(int)

for i in range(n):
    for j in range(n):
        left[p] = a[i][0] + a[j][1]
        d[a[i][2] + a[j][3]] += 1
        p +=1

ans = 0

for e in left:
    ans += d[-e]

print(ans)    
