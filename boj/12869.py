import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')
n = int(input())
p = list(map(int, sys.stdin.readline().split()))
a = [0]*3
for e in range(n):
    a[e] = p[e]

ans = 0
inf = sys.maxsize

dp = [[[-1 for _ in range(62)] for _ in range(62)] for _ in range(62)]

def go(x, y, z):
#    print(x,y,z)
    if x < 0:
        return go(0,y,z)
    if y < 0:
        return go(x,0,z)
    if z < 0:
        return go(x,y,0)
    
    if x == 0 and y == 0 and z == 0:
        return 0

    if dp[x][y][z] != -1:
        return dp[x][y][z]

    ret = inf

    ret = min(ret, go(x-9, y-3,z-1)+1)
    dp[x][y][z] = ret
    ret = min(ret, go(x-9, y-1,z-3)+1)
    dp[x][y][z] = ret

    ret = min(ret, go(x-3, y-1,z-9)+1)
    dp[x][y][z] = ret
    ret = min(ret, go(x-3, y-9,z-1)+1)
    dp[x][y][z] = ret

    ret = min(ret, go(x-1, y-3,z-9)+1)
    dp[x][y][z] = ret
    ret = min(ret, go(x-1, y-9,z-3)+1)
    dp[x][y][z] = ret

    return ret
    

p = go(a[0],a[1],a[2])
print(p)

