import sys
import copy

dbg = 0
if dbg: sys.stdin = open('in.txt','r')

n, m = map(int, sys.stdin.readline().split())


graph = []

for _ in range(n):
    a = list(map(int, sys.stdin.readline().split()))
    graph.append(a)

ans = 0
cnt = 0


dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

def dfs(lap, x, y):
    for k in range(4):
        nx = dx[k] + x
        ny = dy[k] + y

        if nx < 0 or ny < 0 or nx >= n or ny >=m:
            continue
        if lap[nx][ny] == 0:
            lap[nx][ny] = 2
            dfs(lap, nx, ny)


for i in range(n):
    for j in range(m):
        if graph[i][j]: continue
        for k in range(n):
            for l in range(m):
                if graph[k][l]: continue
                for o in range(n):
                    for p in range(m):
                        if graph[o][p]: continue
                        # copy map
                        if graph[i][j] == 2 or graph[k][l] == 2 or graph[o][p] == 2:
                            continue
                        if graph[i][j] == 1 or graph[k][l] == 1 or graph[o][p] == 1:
                            continue
                        
                        if (i == k and j == l) or (k == o and l == p) or (i == o and j == p):
                            continue
                        
                        
                        lab = copy.deepcopy(graph)
                        lab[i][j], lab[k][l] , lab[o][p] = 9, 9, 9

                        for x in range(n):
                            for y in range(m):
                                if lab[x][y] == 2:
                                    cnt = 0
                                    dfs(lab, x,y)

                        for k1 in range(n):
                            for k2 in range(m):
                               if lab[k1][k2] == 0:
                                   cnt += 1
                                    
                        if cnt > ans:
                            ans = cnt

                            if dbg:
                                print(ans,i,j,':',k,l,':',o,p)
                            if dbg:
                                for e in lab:
                                    print(e)
                                            #sys.exit(0)


                        
print(ans) 
'''                       
'''