import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

a, b = map(int, sys.stdin.readline().split())

s = set()
p = []
for _ in range(a):
    i = sys.stdin.readline().rstrip()
    s.add(i)

for _ in range(b):
    i = sys.stdin.readline().rstrip()
    if i in s:
        p.append(i)

print(len(p))
p.sort()
for e in p:
    print(e)