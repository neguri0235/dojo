import sys
import heapq

tc = int(input())

for _ in range(tc):
    n = int(input())
    heap = []
    for _ in range(n):
        a, b = sys.stdin.readline().split()
        heapq.heappush(heap, (-(int(a)), b))
    print(heapq.heappop(heap)[1])