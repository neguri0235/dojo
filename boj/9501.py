import sys
t = int(input())

for _ in range(t):
    n, d = map(int, sys.stdin.readline().split())
    ans = 0
    for _ in range(n):
        a, b, c = map(int, sys.stdin.readline().split())
        k = a*b//c
        if k >= d:
            ans +=1
    print(ans)


