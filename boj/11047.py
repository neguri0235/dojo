import sys

n, money = map(int, sys.stdin.readline().split())

coin = [0 for i in range(n)]
for i in range(n):
    coin[i] = int(sys.stdin.readline())

coin = sorted(coin, reverse = True)

num = 0
for e in coin:
#    print(e,money)
    if money // e > 0:
       num += money // e
       money = money % e
print(num) 