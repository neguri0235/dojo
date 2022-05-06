import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')
n = int(input())
a = list(sys.stdin.readline().rstrip())

dp = [[-1 for _ in range(202)] for _ in range(202)]

opn = ['{','(','[']
clo = ['}',')',']']

def go(start, end):
    #if start == end:
    #    return 0

    if start > end:
        return 1

    if dp[start][end] != -1:
        return dp[start][end]

    ret = 0

    for i in range(start+1, end+1, 2):
        for k in range(3):
            if a[start] == opn[k] or a[start] == '?':
                if a[i] == clo[k] or a[i] == '?':
                    ret += go(start+1, i-1) * go(i+1, end)
    
    dp[start][end] = ret
    return ret

p = 0
if n%2:
    p = 0
else:
    p = go(0,n-1)
    p %=100000
print(p)




