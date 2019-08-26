import sys
import bisect

n = int(input())
data = list(map(int, sys.stdin.readline().split()))
sort = list()

for e in data:
    i = bisect.bisect_left(sort,e)
    if i >= len(sort):
        sort.append(e)
    else:
        sort[i] = e
print(len(sort))