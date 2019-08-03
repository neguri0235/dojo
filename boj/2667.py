'''
7
0110100
0110101
1110101
0000111
0100000
0111110
0111000
'''

import sys



dy = [1,-1,0,0]
dx = [0,0,1,-1]

def dfs(y,x,d,c):
    for i in range(4):
        ny = y + dy[i]
        nx = x + dx[i]

        if nx < 0 or ny < 0 or nx >= n or ny >=n:
            continue

        if A[ny][nx] and D[ny][nx] == 0:
            A[ny][nx] = 0
            D[ny][nx] = d
            c = dfs(ny,nx,d,c+1)

    return c

sys.stdin =  open('2667.txt','r')

n = int(sys.stdin.readline())
A = []
D = [ [ 0 for i in range(n+1)] for j in range(n+1)]
for i in range(0,n):
    line = list(map(int, sys.stdin.readline().rstrip()))
    A.append(line)

depth = 0
cnt =0
ans = []
number = 0
count =0
for i in range(n):
    for j in range(n):

        if A[i][j] and D[i][j] == 0:
            depth += 1
            A[i][j] = 0
            D[i][j] = depth
            cnt = dfs(i,j,depth,1)
        
        if cnt:
            ans.append(cnt)
            cnt = 0


print(len(ans))
ans.sort()
for e in ans:
    print(e)
'''
print('----------------------')

for e in D:
    print(e)
'''
