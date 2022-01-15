import sys
import bisect


dbg = True
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
a = []
for _ in range(n):
    b = list(map(int, sys.stdin.readline().split()))
    a.append(b)

right = [0 for i in range(n*n)]
left = [0 for i in range(n*n)]
p = 0
for i in range(n):
    for j in range(n):
        left[p] = a[i][0] + a[j][1]
        right[p] = a[i][2] + a[j][3]
        p +=1

right.sort()
ans = 0
for i in range(len(left)):
    
    l = bisect.bisect_left(right, 0 - left[i])
    r = bisect.bisect_right(right, 0 - left[i])
    ans += r - l
print(ans)    
