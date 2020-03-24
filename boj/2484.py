import sys

def calc(d):
    if d[0] == d[1] == d[2] == d[3]:
        m = 50000 + (d[0]*5000)
        return m

    if d[0] == d[1] == d[2] :
        m = 10000 + (d[0] * 1000)
        return m
    
    if d[1] == d[2] == d[3]:
        m = 10000 + (d[1] * 1000)
        return m

    if d[0] == d[1] and d[2] == d[3]:
        m = 2000 + (d[0] * 500) + (d[2] * 500)
        return m
    
    if d[0] == d[1]:
        m = 1000 + (d[0]*100)
        return m
    
    if d[1] == d[2]:
        m = 1000 + (d[1]*100)
        return m
    

    if d[2] == d[3]:
        m = 1000 + (d[2] * 100)
        return m

    m = d[3] * 100
    return m
    

money = 0
n = int(input())

for _ in range(n):
    d = list(map(int, sys.stdin.readline().split()))
    d = sorted(d)
    m = calc(d)
    money = max(money, m)
print(money)