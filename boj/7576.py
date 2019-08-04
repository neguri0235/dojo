import sys
from collections import deque


sys.stdin = open('7576.txt','r')

N,M = map(int,sys.stdin.readline().split())
#print(N,M)

A = []
D = [ [ -1 for i in range(N)] for j in range((M))]

for _ in range(M):
    A.append(list(map(int,sys.stdin.readline().split())))



#q = []
q = deque()
hole = 0


for i in range(M):
    for j in range(N):
        if A[i][j] == 1:
            q.append((i,j))
            D[i][j] = 0
        elif A[i][j] == -1:
            hole += 1

ok = len(q)
tot = N*M
day = 0
count = 0
'''
print('익은: ',ok)
print('빈칸: ',hole)
'''
dy = [-1,1,0,0]
dx = [0,0,-1,1]

while q:
    y, x = q.popleft()
    w = D[y][x]
    for i in range(4):

        ny = y + dy[i]
        nx = x + dx[i]

        if ny < 0 or nx < 0 or ny >= M or nx >= N:
            continue
        
        if A[ny][nx] == 0 and D[ny][nx] == -1:
            q.append((ny,nx))
            A[ny][nx] = 1
            D[ny][nx] = w + 1
            day = max(day,w+1)
            count += 1


'''
for e in A:
    print(e)
print('----------------')
for e in D:
    print(e)
'''
count += (ok + hole)

if count == tot:
    print(day)
else:
    print(-1)
