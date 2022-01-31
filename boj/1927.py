import sys
import heapq
dbg = True
if dbg: sys.stdin = open('in.txt','r')

heap = []

n = int(sys.stdin.readline())
for _ in range(n):
    a = int(sys.stdin.readline())

    if not a:
        if heap:
            print(heapq.heappop(heap))
        else:
            print(0)
    else:
        heapq.heappush(heap, a)