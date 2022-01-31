import sys
import heapq

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(sys.stdin.readline())

heap = []

for _ in range(n):
    a = int(sys.stdin.readline())
    if a == 0:
        if not heap:
            print(0)
        else:
            print(-heapq.heappop(heap))
    else:
        heapq.heappush(heap, -a)