import sys
import math

s = list(input())

ans = 0
for e in s:
    if ord(e) >= ord('a') and ord(e) <= ord('z'):
        ans += ord(e) - ord('a') + 1
    else:
        ans += ord(e) - 38

p = [ 1 for i  in range(2000)]

for i in range(2, int(math.sqrt(2000))):
    if p[i] == 0:
        continue
    for j in range(2, 2000):
        if i*j >= 2000:
            break
        p[i*j] = 0

if False:
    for i in range(2000):
        if p[i]:
            print(i, end = ' ')
def makePrime():
    array = [ True for i in range(n+1)]


if p[ans]:
    print("It is a prime word.")
else:
    print("It is not a prime word.")
