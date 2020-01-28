
cnt = 0

def search(n, sum):
    global cnt
    if sum == n:
        cnt += 1
    elif sum > n:
        return
    search(n, sum + 1)
    search(n, sum + 2)
    search(n, sum + 3)


T = int(input())

for _ in range(T):
    cnt = 0
    n = int(input())
    search(n, 1)
    search(n, 2)
    search(n, 3)    
    print(cnt)