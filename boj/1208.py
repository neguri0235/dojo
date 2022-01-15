import sys
import bisect

dbg = 0
if dbg: sys.stdin = open('in.txt','r')

N, S = map(int, sys.stdin.readline().split())
ab = list(map(int, sys.stdin.readline().split()))



# split two list
a = []
b = []
for i in range(N):
    if i < (N//2):
        a.append(ab[i])
    else:
        b.append(ab[i])

if dbg: print(a)
if dbg: print(b)

ans = 0
a_len = len(a)
b_len = len(b)
c = []
d = []

def dfs_a(s, i):
    if i == a_len:
        c.append(s)
        return

    dfs_a(s+a[i],i+1)
    dfs_a(s,i+1)


def dfs_b(s, i):
    if i == b_len:
        d.append(s)
        return
    dfs_b(s+b[i], i+1)
    dfs_b(s, i+1)

dfs_a(0,0)
dfs_b(0,0)

c.sort()
d.sort()
if dbg: print(c)
if dbg: print(d)

for i in range(len(c)):
    
    left = bisect.bisect_left(d,S - c[i])
    right = bisect.bisect_right(d,S- c[i])

    if dbg: print(left,right)
    ans += right - left
if S == 0:
    ans -= 1
print(ans)

