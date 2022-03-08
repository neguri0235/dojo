import sys
dbg = 1 
if dbg: sys.stdin = open('in.txt','r')
a, b, c = map(int, sys.stdin.readline().split())

ans = 0

bottle = a + b

while bottle >= c:
    ans += bottle // c
    bottle = bottle // c + bottle%c
print(ans)

