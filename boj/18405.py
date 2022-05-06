import sys
import heapq
import copy

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n, m = map(int, sys.stdin.readline().split())
lab = []
for _ in range(n):
    lab.append(list(map(int, sys.stdin.readline().split())))

s, xx, yy = map(int, sys.stdin.readline().split())

heap = []

for i in range(n):
    for j in range(n):
        if lab[i][j]:
            heapq.heappush(heap,[lab[i][j],[i,j]])

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

while s:

    node = copy.deepcopy(heap)
    heap = []
    if dbg: print('------------')
    while node:
        p, [x, y] = heapq.heappop(node)
        if dbg: print(p,'->',x,y)

        for k in range(4):
            nx = dx[k] + x
            ny = dy[k] + y

            if nx < 0 or ny < 0 or nx >= n or ny >= n:
                continue
        
            if lab[nx][ny] == 0:
                lab[nx][ny] = p
                heapq.heappush(heap,[p,[nx,ny]])
                if dbg: print('add: ',p,'->',nx,ny)
    s -= 1
print(lab[xx-1][yy-1])

