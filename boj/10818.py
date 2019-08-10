import sys

n = int(input())
a = list(map(int, sys.stdin.readline().split()))
a = sorted(a)
print(a[0], a[-1])