'''
7
3 1 5 2 3 6 4
'''

import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
a = list(map(int, sys.stdin.readline().split()))

D = [1 for i in range(1002)]

for i in range(1, n):
    for j in range(0, i+1):
        if a[i] > a[j] and D[i] <= D[j]:
            D[i] += 1

if dbg:
    for i in range(n):
        print(D[i], end = ' ')
    print()

idx = 0
p = []
val = 2

while True:
    if len(p) == max(D):
        break
    
    if (D[idx]+1) == val:
        p.append(a[idx])
        val += 1
    idx += 1    

for e in p:
    print(e, end = ' ')        