import sys

n, b = map(int, sys.stdin.readline().split())

ans = []
while n:
    p = n%b
    ans.append(p)
    n = n//b
ans.reverse()
for e in ans:
    if e <=9 :
        print(e,end='')
    else:
        print(chr(ord('A')+(e-10)),end='')
