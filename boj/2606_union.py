import sys
dbg = 1
if dbg: sys.stdin = open('2606.txt','r')

n = int(input())
m = int(input())
ans = 0
D = [i for i in range(n+1)]

def union(x, y):
    x = find(x)
    y = find(y)
    if x != y:
        D[y] = x

def find(x):
    if D[x] == x:
        return x
    else:
        return find(D[x])

for _ in range(m):
    a, b = map(int, sys.stdin.readline().split())
    union(a,b)
if dbg: print(D)
for i in range(2,n+1):
    if find(1) == find(i):
        ans+= 1
#print(D.count(1)-1)
print(ans)