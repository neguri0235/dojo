import sys

dbg = 1
ans = []
if dbg: sys.stdin = open('in.txt','r')

a, b = map(int, sys.stdin.readline().split())
c = list(map(str, sys.stdin.readline().split()))
visit = [False for i in range(20)]
c.sort()
if dbg: print(a,b)
if dbg: print(c)

def check(s):
    mo = 0
    ja = 0
    for e in s:
        if e == 'a' or e == 'e' or e == 'i' or e == 'u' or e == 'o':
            mo += 1
        else:
            ja += 1
    if mo >=1 and ja >= 2:
        return True
    else:
        return False

def go(p,c,i):
    if len(p) == a:
        if check(p):
            ans.append(p)
            k = ''.join(p)
            print(k)
    elif len(p) > a:
        return
    else:
        for idx in range(i,b):
            if visit[idx]:
                continue
            p.append(c[idx])
            visit[idx] = True
            go(p,c,idx)
            p.pop()
            visit[idx] = False

d = []
go(d,c,0)
