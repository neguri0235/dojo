import sys
import bisect

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))

D = []
s = 0
for e in a:
    idx = bisect.bisect_left(D,e)

    if len(D) <= idx:
        D.append(e)
    else:
        D[idx] = e
    s = max(sum(D),s)

#print(D)
#print(sum(D))
print(s)