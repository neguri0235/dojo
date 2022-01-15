import sys
from collections import deque

sys.stdin = open('in.txt','r')

a, b, c = map(int, sys.stdin.readline().split())

q = deque()

dp = [[0 for i in range(202)] for j in range(202)]
ans = []
#T 전체 물의 양
T = c
# 현재 a, b 물통에 들어 있는 물의 크기
q.append([0,0])

dp[0][0] = 1

while len(q):

    x, y = q.popleft()
    z = T - x - y
    if not x:
        ans.append(z)

    #a <- b
    nx, ny = x, y
    nx += y
    ny = 0
    if nx > a:
        ny = nx - a
        nx = a
    if not dp[nx][ny]:
        dp[nx][ny] = 1
        q.append([nx,ny])

    #a <- c
    z = T - x - y
    nx, ny = x, y
    nx += z
    z = 0
    if nx > a:
        z = nx - a
        nx = a
    if not dp[nx][ny]:
        dp[nx][ny] = 1
        q.append([nx,ny])

    #b <- a
    z = T - x - y
    nx, ny = x, y
    ny += x
    nx = 0
    if ny > b:
        nx = ny - b
        ny = b
    if not dp[nx][ny]:
        dp[nx][ny] = 1
        q.append([nx,ny])


    #b <- c
    z = T - x - y
    nx, ny = x, y
    ny += z
    z = 0
    if ny > b:
        z = ny - b
        ny = b
    if not dp[nx][ny]:
        dp[nx][ny] = 1
        q.append([nx,ny])

    #c <- a
    nz = T - x - y
    nx, ny = x, y
    
    nz += nx
    nx = 0
    if nz > c:
        nx = nz - a
    if not dp[nx][ny]:
        dp[nx][ny] = 1
        q.append([nx,ny])

    #c <- b
    nz = T - x - y
    nx, ny = x, y
    
    nz += ny
    ny = 0
    if nz > c:
        ny = nz - b
    if not dp[nx][ny]:
        dp[nx][ny] = 1
        q.append([nx,ny])    
ans.sort()
for e in ans:
    print(e,end = ' ')