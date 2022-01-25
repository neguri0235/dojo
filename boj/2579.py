import sys

dbg = 1

if dbg: sys.stdin = open('in.txt','r')

n = int(input())
a = []
d = [0 for i in range(n+3)]
a.append(0)
for _ in range(n):
    b = int(input())
    a.append(b)
a.append(0)
d[0] = a[0]
d[1] = a[1]
d[2] = a[1] + a[2]

for i in range(3,n+1):
    d[i] = a[i] + max(d[i-2],a[i-1] + d[i-3])

print(d[n])    