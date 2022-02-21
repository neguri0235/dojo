import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
s = [0 for i in range(n)]
w = [0 for i in range(n)]
for i in range(n):
    s[i], w[i] = map(int, sys.stdin.readline().split())


if dbg:
    for i in range(n):
        print(s[i], w[i])
    


def go(index):
    if index == n:
        cnt = 0
        for i in range(n):
            if s[i] <=0:
                cnt += 1
        return cnt 

    
    if s[index] <= 0:
        return go(index+1)
    
    ans = 0
    ok = False
    for j in range(n):
        i = index
        if i == j: continue

        if s[j] > 0:
            ok = True
            s[i] -= w[j]
            s[j] -= w[i]

            temp = go(index+1)
            ans = max(ans, temp)

            s[i] += w[j]
            s[j] += w[i]

    if not ok:
        return go(index+1)
    return ans

p = go(0)
print(p)
