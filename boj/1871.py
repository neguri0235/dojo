import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(sys.stdin.readline())
for _ in range(n):
    a, b = sys.stdin.readline().split('-')
    a = list(a)
    b = int(b)
    p = (ord(a[0])-ord('A'))*26*26 + (ord(a[1])-ord('A'))*26 + (ord(a[2]) - ord('A'))
    if abs(p-b) <= 100:
        print('nice')
    else:
        print('not nice')