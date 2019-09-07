import sys
H,M = map(int, sys.stdin.readline().split())
M +=  int(input())

if M >= 60:
    D1 = M //60
    M = M%60
    H +=D1


if H >23:
    H = H%24
print(H,M)
