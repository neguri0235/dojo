import sys

dbg = 1
if dbg:
    sys.stdin = open('in.txt','r')

n = int(input())
a = [ 0 for i in range(n+3)]
D = [ 0 for i in range(n+3)]

for i in range(n):
    p = int(sys.stdin.readline())
    a[i] = p

a.insert(0,0)

    
for i in range(1,n+1):
    D[i] = max(D[i-3]+a[i-1]+a[i], D[i-2]+a[i], D[i-1])

if dbg:
    for i in range(1, n+1):
        print(D[i], end = ' ')
    print()

print(max(D))