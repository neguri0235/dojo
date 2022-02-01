import sys
from collections import defaultdict

dbg = 1
if dbg: sys.stdin = open('in.txt','r')
n = int(input())
d = defaultdict(int)

for _ in range(n):
    a, b = sys.stdin.readline().split()
    if b == 'enter':
        d[a] = 1
    else:
        d[a] = 0

a = []
for e, v in d.items():
    if v:
        a.append(e)
a.sort(reverse=True)
for e in a:
    print(e)