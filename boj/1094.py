x = int(input())
n = 0
A = [64,32,16,8,4,2,1]
t = x
while t != 0:

    for e in A:
        if e <= t:
            t -=e
            n+=1
print(n)