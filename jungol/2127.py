import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

def gcd(a, b):
    if a < b:
        a, b = b, a
    while b:
        n = a%b
        a, b = b, n
    return a

t = int(input())
for _ in range(t):
    a, b, n, m = map(int, sys.stdin.readline().split())
    n0 = 0
    n1 = 1
    n2 = 0
    k = max(n,m)
    val = []

    for i in range(k):
        n2 = b*n0 + a*n1
        n0 = n1%998244353 
        n1 = n2%998244353 


        if i == n-2 or i == m-2:
            val.append(n2)
        if len(val) == 2:
            break
    if dbg: print("test: ",val[0],val[1])
    print(gcd(val[0],val[1]))
'''
    dp = [0 for i in range(k+1)]
    
    dp[1] = 1
    for i in range(2,k+1):
        dp[i] = a*dp[i-1] + b*dp[i-2]
        #print("ans: ",dp[i]," = ", b*dp[i-2]," + ",a*dp[i-1])
    print("ans: ",dp[n],dp[m])
    print(gcd(dp[n],dp[m]))
    print('--------------------')
'''