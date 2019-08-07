import sys
import collections

sys.stdin = open('2606.txt','r')

n = int(input()) # node
m = int(input()) # edge

D = [0]*(n+1)
A = dict()
deq = collections.deque()

for i in range(n+1):
    A[i] = []

for i in range(0,m):
    from_ , to_ = map(int, sys.stdin.readline().split())
    A[from_].append(to_)
    A[to_].append(from_)

deq.append(1)
D[1] = 1

while len(deq):
    a = deq.popleft()
    node = A[a]

    for e in node:
        if D[e] == 0:
            D[e] = 1
            deq.append(e) 
print(D.count(1)-1)