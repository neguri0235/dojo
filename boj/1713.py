import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
p = []
for _ in range(n):
    a = int(input())
    p.append(a)

k,q = 0, 0

if p[1] - p[0] == p[2] - p[1]:
    k = p[1] - p[0]
else:
    q = p[1]//p[0]
    
if k:
    print(p[-1] + k)
else:
    print(p[-1]*q)