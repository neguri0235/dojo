import sys
import bisect

n = int(input())
a = list(map(int, sys.stdin.readline().split()))
D= []
for e in a:
    idx = bisect.bisect_left(D,-e)
    if len(D) <= idx:
        D.append(-e)
    else:
        D[idx] = -e
print(D)
print(len(D))        