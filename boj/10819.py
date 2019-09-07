import itertools
import sys


def calc(a) -> int:
    sum = 0
    for i in range(len(a)-1):
        sum += abs(a[i] - a[i+1])
    return sum
max_ = 0
N = int(input())
D = list(map(int, sys.stdin.readline().split()))
for perm in itertools.permutations(D):
    c = calc(perm)
    max_ = max(c, max_)
print(max_)