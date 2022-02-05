import heapq
import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')
n = int(sys.stdin.readline())

heap = []

for _ in range(n):
    v = int(sys.stdin.readline())
    if abs(v):
        a = [abs(v),v]
        heapq.heappush(heap,a)
    else:
        if len(heap):
            print(heapq.heappop(heap)[1])
        else:
            print(0)
