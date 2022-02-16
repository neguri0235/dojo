import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')
n = int(input())
a = [0 for  i in range(n)]
for i in range(n):
    p = int(input())
    a[i] = p
a.sort(reverse=True)
for e in a:
    print(e)
