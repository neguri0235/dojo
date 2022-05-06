import sys
import copy

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

a = []
for _ in range(4):
    a.append(list(map(int, sys.stdin.readline().rstrip())))


def dfs(x, y):
    a[x][y] = 9
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]

    for k in range(4):
        ny = y + dy[k]
        nx = x + dx[k]

        if nx < 0 or ny < 0 or nx >=4 or ny >= 5:
            continue
        
        if a[nx][ny] == 0:
            dfs(nx,ny)


ans = 0

for i in range(4):
    for j in range(5):
        if a[i][j] == 0:
            ans += 1
            dfs(i,j)
print(ans)

for e in a:
    print(e)