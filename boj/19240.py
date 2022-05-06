import sys
from collections import deque
from collections import defaultdict

dbg = 0

if dbg: sys.stdin = open('in.txt','r')

t = int(input())
for _ in range(t):
    n, m = map(int, sys.stdin.readline().split())

    a = [[] for i in range(n+1)]
    d = defaultdict(int)
    v = [-1 for i in range(n+1)]
    for _ in range(m):
        x, y = map(int, sys.stdin.readline().split())
        a[x].append(y)
        a[y].append(x)
    
    ans = 0

    for i in range(1,n+1):
        if v[i] != -1:
            continue

        v[i] = 0
        q = deque()
        q.append(1)
        

        while q:
            node = q.popleft()
            if dbg: print('node: ',node)
            for e in a[node]:
                if dbg: print(' -> ',e)
                if v[node] == v[e]:
                    ans = -1
                    break
                else:
                    if v[e] == -1:
                        v[e] = 1 - v[node]
                        q.append(e)
                        if dbg: print(' q add: ',e)
            if dbg: print()
                
    if ans == -1:
        print('NO')
    else:
        print('YES')




    

    

