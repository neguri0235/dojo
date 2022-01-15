import sys

sys.stdin = open('in.txt','r')

N, S = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))
ans = 0

def dfs(s, idx):
    
    if idx == N:
        if s == S:
            global ans
            ans +=1
        return
    
    dfs(s + a[idx],idx+1)
    dfs(s, idx+1)

dfs(0,0)
if S == 0:
    ans -= 1
print(ans)