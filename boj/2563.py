import sys

'''
3
3 7
15 7
5 2
'''
dbg = 1
if dbg: sys.stdin = open('in.txt','r')
input = sys.stdin.readline
n = int(input())
a = [ [0 for i in range(101)] for j in range(101)]

for _ in range(n):
    x, y = map(int, input().split())
    
    for i in range(x, x+10):
        for j in range(y, y+10):
            a[i][j] = 1

ans = 0

for i in range(101):
    for j in range(101):
        if a[i][j]:
            ans +=1
print(ans)            