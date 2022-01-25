import sys

dbg = 1
if dbg: sys.stdin = open('in.txt','r')
a = list(input())
b = list(input())

a.insert(0,'0')
b.insert(0,'0')

D = [ [0 for i in range(1002)] for j in range(1002)]


for i in range(1,len(a)):
    for j in range(1,len(b)):

        if a[i] == b[j]:
            D[i][j] = D[i-1][j-1] + 1
        else:
            D[i][j] = max(D[i-1][j], D[i][j-1])

ans = D[len(a)-1][len(b)-1]


def check(ans):
    s = []
    x = len(a)-1
    y = len(b)-1
    while True:

        if len(s) == ans:
            break
        
        if D[x][y] == D[x-1][y]:
            x -= 1
        
        elif D[x][y] == D[x][y-1]:
            y -= 1 
        else:
            s.append(a[x])
            x -= 1
            y -= 1


    s = ''.join(s)
    s = s[::-1]
    return s

if ans:
    print(ans)
    print(check(ans))
else:
    print(0)    