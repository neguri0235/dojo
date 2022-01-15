import sys
from collections import deque

sys.stdin = open('in.txt','r')

N, K = map(int, sys.stdin.readline().split())

#print(n, k)

a = [0] * 100002

q = deque([])
q.append(N)
a[N] = 0

while len(q):
    c = q.popleft()
    
    # Find k
    if c is K:
        print(a[c])
        break

    n = c + 1
    if n <= 100000 and(a[n] > a[c] or a[n] == 0):
        a[n] = a[c] + 1
        q.append(n)

    n = c - 1    
    if n >= 0 and (a[n] > a[c] or a[n] == 0):
        a[n] = a[c] + 1
        q.append(n)

    n = c * 2
    if n <= 100000 and(a[n] > a[c] or a[n] == 0):
        a[n] = a[c] + 1
        q.append(n)

    

    
