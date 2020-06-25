import sys
from queue import PriorityQueue

dbg = 1

N, M = map(int, sys.stdin.readline().split())

W = [ 0 for _ in range(N+1)]
A = [[] for _ in range(N+1)]

for i in range(M):
    a,b = map(int, sys.stdin.readline().split())
    A[a].append(b)
    W[b] += 1

que = PriorityQueue()

print(A)
print(W)

for i in range(1,N+1):
    if W[i] == 0:
        que.put(i)
        if dbg: print(i, end = '  ')

if dbg: print("----------------")

while que.empty() == False:
    v = que.get()
    print(v, end = ' ')
    for i in A[v]:
        W[i] -= 1
        if W[i] == 0:
            que.put(i)