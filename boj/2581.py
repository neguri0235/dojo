import sys
import math

# 10000
# 소수 구하기
A = [1]*10001
A[0] = A[1] = 0

for i in range(2,int(math.sqrt(10001))):
    for j in range(2,10000):

        if A[i] == 0:
            continue
        if i*j >= 10000:
            continue
        A[i*j] = 0

N = int(input())
M = int(input())
idx = 0
sum = 0
for i in range(N,M+1):
    if A[i]:
        sum += i

    if A[i] and idx == 0:
        idx = i
if sum == 0:
    print(-1)
else:
    print(sum)
    print(idx)