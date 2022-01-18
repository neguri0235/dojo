import sys

dbg = 1
sys.stdin = open('in.txt','r')

input = sys.stdin.readline

n = int(input())
a, s = [], []
ans = 0

for _ in range(n):
    p = int(input())
    a.append(p)

for e in a:
    while len(s) and s[-1] <= e:
        s.pop()
    ans += len(s)
    s.append(e)

print(ans)