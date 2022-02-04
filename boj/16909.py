import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
a.insert(0,0)

lg = [ 0 for i in range(n+1)]
rg = [ (n+1) for i in range(n+1)]
ls = [ 0 for i in range(n+1)]
rs = [ (n+1) for i in range(n+1)]

def calc(p):
    return p*(p+1)//2

sg = [] # stack greater
ss = [] # stack smaller

sg.append([1, a[1]])
ss.append([1, a[1]])

for i in range(2, n+1):
    while len(sg) and a[i] >= sg[-1][1]:
        rg[sg[-1][0]] = i
        sg.pop()
    
    sg.append([i, a[i]])

    while len(ss) and a[i] <= ss[-1][1]:
        rs[ss[-1][0]] = i
        ss.pop()
    
    ss.append([i, a[i]])

sg = []
ss = []
sg.append([n, a[n]])
ss.append([n, a[n]])

for i in range(n-1, 0, -1):
    while len(sg) and a[i] > sg[-1][1]:
        lg[sg[-1][0]] = i
        sg.pop()
    
    sg.append([i, a[i]])

    while len(ss) and a[i] < ss[-1][1]:
        ls[ss[-1][0]] = i
        ss.pop()
    ss.append([i, a[i]])


ans = 0

for i in range(1, n+1):
    l = min(i, lg[i]+1)
    r = max(i, rg[i]-1)

    len = r - l + 1
    ans += (calc(len) - calc(r-i) - calc(i-l)) * a[i]


for i in range(1, n+1):
    l = min(i, ls[i] + 1)
    r = max(i, rs[i] - 1)
    len = r -l + 1
    ans -= (calc(len) - calc(r-i) - calc(i-l)) * a[i]

print(ans)
