import sys

max_ = 0
A = list(input())

D = [0 for i in range(0,10)]

for e in A:
#    print(ord(e)-48)
    D[ord(e)-48] += 1

D[6] = D[9] = (D[9] + D[6])//2 + (D[9]+D[6])%2

for e in D:
    max_ = max(e, max_)
print(max_)