'''
ACAYKP
CAPCAK
'''

import sys

A =  list(sys.stdin.readline().rstrip())
B = list(sys.stdin.readline().rstrip())

A.insert(0,'a')
B.insert(0,'b')

#print(A)
#print(B)
res = 0
LEN = max(len(A), len(B))+1

dp = [  [0 for i in range(LEN)] for j in range(LEN)]

for i in range(1, len(A)):
    for j in range(1,len(B)):
        if A[i] == B[j]:
            dp[i][j] =dp[i-1][j-1] + 1
        else:
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])
        res = max(res, dp[i][j])
#for e in dp:
#    print(e)
#print(dp[len(A)-1][len(B)-1])
print(res)