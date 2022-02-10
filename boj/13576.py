import sys
dbg = 0

if dbg: sys.stdin = open('in.txt','r')
a = list(sys.stdin.readline().rstrip())

def preprocessing(p):
    n = len(p)
    pi = [ 0 for i in range(n)]
    j = 0
    for i in range(1,n):
        while j > 0 and p[i] != p[j]:
            j = pi[j-1]
        if p[i] == p[j]:
            pi[i] = j+1
            j += 1
        else:
            pi[i] = 0
    return pi

pi = preprocessing(a)
if dbg: print(pi)
n = len(a)
cnt = [0 for i in range(n+1)]

for i in range(n):
    cnt[pi[i]] += 1

i = n
while i:
    cnt[pi[i-1]] += cnt[i]
    i -= 1

ans = []
i = n
while i:
    ans.append([i,cnt[i]+1])
    i = pi[i-1]
ans.sort()
print(len(ans))
for e in ans:
    print(e[0],e[1])
