import sys

tc = int(input())

for i in range(tc):
    a = list(map(int, sys.stdin.readline().split()))
    a = sorted(a)
    print(a[7])
