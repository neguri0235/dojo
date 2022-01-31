import sys

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n, m = map(int, sys.stdin.readline().split())
D = [i for i in range(n+1)]
rank = [0 for i in range(n+1)]

def union(x, y):
    x = find(x)
    y = find(y)
    
    if x == y:
        return
    
    if rank[x] < rank[y]:
        x, y = y, x
    D[y] = x
    
    if rank[x] == rank[y]:
        rank[x] = rank[y] + 1
    

def find(x):
    if x == D[x]:
        return x
    else:
        y = find(D[x])
        D[x] = y
        return y


for _ in range(m):
    a, b, c = map(int, sys.stdin.readline().split())

    if a == 0:
        # union
        union(b,c)
    else:
        if dbg: print(D)
        b = find(b)
        c = find(c)
        if b == c:
            print("YES")
        else:
            print("NO")
