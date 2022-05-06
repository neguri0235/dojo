from functools import cmp_to_key
import copy
import sys

dbg = 1
if dbg: sys.stdin = open('in.txt','r')


def comp(x, y):
    if x[0] < y[0]:
        return 1
    elif x[0] > y[0]:
        return -1
    else:
        if x[1] < y[1]:
            return -1
        elif x[1] > y[1]:
            return 1
        else:
            return 0

t = int(input())
for _ in range(t):
    n = int(sys.stdin.readline())
    p = [[0,0,0,0] for _ in range(n)]
    for i in range(n):
        a, b = map(int, sys.stdin.readline().split())
        p[i][0], p[i][1],p[i][2] = a+b,a,b
    #p = sorted(p, key=cmp_to_key(comp))
    p.sort(reverse=True)
    sa = 0
    sb = 0
    for i in range(n):
        if i%2 == 0:
            sa +=  p[i][1]
        else:
            sa -= p[i][2] 
    print(sa)









