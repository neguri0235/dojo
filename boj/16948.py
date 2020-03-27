# 16948 데스 나이트

import sys
import collections

dbg = 0

N = int(input())
r1,c1,r2,c2 = map(int, sys.stdin.readline().split())


dr = [-2,-2,0,0,2,2]
dc = [-1,1,-2,2,-1,1]

dq = collections.deque()
dq.append((r1,c1,0))

dp = [ [0 for _ in range(N)] for _ in range(N)]

dp[r1][c1] = 1

while len(dq):
    np = dq.popleft()

    r,c,v = np[0], np[1], np[2]

    if dbg == 1: print("curr: ",r,c,v)


    for i in range(6):
        nr = r+dr[i]
        nc = c+dc[i]


        if nr < 0 or nc < 0 or nr >=N or nc >=N:
            continue


        if dbg == 1: print("    -> new: ",nr,nc)
        if nr == r2 and nc == c2:
            if dbg == 1: print("GOT IT",v)
            print(v+1)
            sys.exit(0)
            break
        if dp[nr][nc] == 1:
            continue
        dp[nr][nc] = 1
        dq.append((nr,nc,v+1))
print(-1)
