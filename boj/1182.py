import sys

'''
5 0
-7 -3 -2 5 8
'''



N, S = map(int, sys.stdin.readline().split())

m = list(map(int, sys.stdin.readline().split()))

res = 0


def dfs(i , sum):
    global res
    if i == N:
        if sum == S:
            res += 1
        return
    if i > N:
        return
    
    dfs(i+1, sum)
    dfs(i+1, sum + m[i])

def worker():
    global res
    dfs(0,0)
    if S== 0:
        res -= 1
    print(res)

if __name__ == "__main__":
    worker()