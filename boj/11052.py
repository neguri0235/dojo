import sys

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
a = list(map(int, sys.stdin.readline().split()))
a.insert(0,0)
d = [0 for i in range(n+2)]

d[1] = a[1]

for i in range(2,n+1):
    for j in range (1, i+1):
        d[i] = max(d[i], d[i-j]+a[j])
print(d[n])