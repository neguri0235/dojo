import sys

dp = [0] * 102

def hanoi(src, via, dst, num):
    if num <= 0:
        return
    
    hanoi(src, dst, via, num-1)
    print(src,dst)
    hanoi(via, src, dst, num-1)

dp[1] = 1
dp[2] = 3

for i in range(3,101):
    dp[i] = dp[i-1]*2+1

n = int(input())
print(dp[n])

if n <=20:
    hanoi(1,2,3,n)
