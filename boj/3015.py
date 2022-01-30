import sys

dbg = 1
if dbg: sys.stdin = open('in.txt','r')
n = int(input())

a = [0 for i in range(n)]

for i in range(n):
    p = int(sys.stdin.readline())
    a[i] = p

ans = 0
stk = []


for i in range(0,len(a)):
    p = [a[i],1]
    while len(stk):
        first, second = stk[-1]
        if first <= a[i]:
            ans += second
            if first == a[i]:
                p[1] += second
            stk.pop()

        else:
            break
    if len(stk):
        ans +=1
    stk.append(p)

print(ans)    