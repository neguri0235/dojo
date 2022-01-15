import sys
from collections import deque

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
for _ in range(n):
    a, b = map(int, sys.stdin.readline().split())

    q = deque([])
    
    if dbg: print('start: ',a,b)
    q.append([a,''])

    while len(q):
        p = q.popleft()

        if p[0] == b:
            print(p[1])
            break

        #D
        d = (p[0] * 2) % 10000
        c = p[1] + 'D'
        q.append([d,c])

        #S
        d = p[0] - 1 
        if d == 0:
            d = 9999
        c = p[1] + 'S'
        q.append([d,c])

        #L
        d = p[0]%1000*10 + p[0]//1000
        c = p[1] + 'L'
        q.append([d,c])

        #R
        d = p[0]%10*1000 + p[0]%1000
        c = p[1] + 'R'
        q.append([d,c])
