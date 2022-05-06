import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')
t = int(input())
for _ in range(t):
    a = list(sys.stdin.readline().rstrip())
    a.reverse()
    p = 0
    for i in range(len(a)) :
        p += int(a[i])*(2**i)
    print(p)