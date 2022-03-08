import sys
n = int(input())
a = list(map(int, sys.stdin.readline().split()))
d = [0 for i in range(102)]
ans = 0
for e in a:
    if d[e] == 1:
        ans += 1
    else:
        d[e] = 1
print(ans)