import sys

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n, s = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))

x, y, sum, ans = 0, 0, 0, sys.maxsize
sum = a[x]
while True:

    if y == n-1:
        break

    if sum < s and x < (n-1):
        x += 1
        sum += a[x]
#        print(sum, x, y)
    else:
        sum -= a[y]
        y += 1

    if sum >= s:
        ans = min(ans, x-y+1)
        if dbg: print(sum,'=', y, x, ' => ', ans)
if ans == sys.maxsize:
    ans = 0        
print(ans)