import sys
from collections import defaultdict
dbg = False 
if dbg: sys.stdin = open('in.txt','r')
n = int(input())

d = defaultdict(int)


for _ in range(n):
    a = sys.stdin.readline().rstrip()
    d[a] += 1

b = []
for k, v in d.items():
    b.append([v,k])

b.sort(reverse=True)
ans = []
m = b[0][0]
for i in range(len(b)):
    if b[i][0] == m:
        ans.append(b[i][1])
ans.sort()
print(ans[0])


    