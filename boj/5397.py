import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
for _ in range(n):
    a = list(sys.stdin.readline().rstrip())
    b = []
    if dbg: print(a)
    for e in a:
        if e == '<':
