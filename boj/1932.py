import sys
sys.stdin = open('1932.txt','r')

n = int(input())
# A = [[0]*11]*501
# D =[[0]*11]*501

A = [[0 for _ in range(502)] for _ in range(502)]
D = [[0 for _ in range(502)] for _ in range(502)]

for i in range(1,n+1):
    data = list(map(int,sys.stdin.readline().split()))
    data.insert(0,0)
    A[i] = data

for i in range(1,n+1):
    for j in range(1,i+1):
        D[i][j] = max(D[i-1][j], D[i-1][j-1]) + A[i][j]

#    print (D[i])
ans = 0
for e in D[n]:
    ans = max(e,ans)
print(ans)