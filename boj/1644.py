import sys
import math

n = int(input())

prime = [ True for i in range(4000001)]

prime[0], prime[1] = False, False
p = []

def makePrime():
    for i in range(2, 4000000+1):
        if prime[i]:
            j = 2
            while i*j <= 4000000:
                prime[i*j] = False
                j +=1

makePrime()


for i in range(4000001):
    if prime[i]:
        p.append(i)

start, end = 0, 0
sum, ans = p[0], 0

while start <= end and end < len(p):
    if sum <= n:
        end += 1
        sum += p[end]
        if sum == n:
            ans += 1

    else:
        sum -= p[start]
        start += 1

print(ans)        
    




