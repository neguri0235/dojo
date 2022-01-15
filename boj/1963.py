import sys
from collections import deque

sys.stdin = open('in.txt','r')

n = int(input())

dbg = 1

prime = [ 1 for i in range(100002)]

def make_prime():
    
    for i in range(2,100002):
        
        if not prime[i]:
            continue
        
        for j in range(2,100002):
            idx = i*j
            if idx > 100000:
                break
            prime[idx] = 0
    
make_prime()


for _ in range(n):
    a, b = map(int, sys.stdin.readline().split())

    q = deque([])
    w = [9999 for i in range(100002)]
    w[a] = 0
    q.append(a)
    ans = False
    while len(q):
        
        if ans is True:
            break

        dist = len(q)
        while dist:
            p = q.popleft()
            dist -= 1

            if b == q:
                print(w[q])
                ans = True
                break

            p1 = p //10            
            for i in range(10):
                p11 = p1 * 10 + i
                if p11 == p:
                    continue

                if prime[p11] and w[p11] > w[p] + 1:
                    q.append(p11)
                    w[p11] = w[p] + 1

            p1 = p // 100
            for i in range(10):
                p11 = p1 * 100 + i*10 + p % 10
                if p11 == p:
                    continue

                if prime[p11] and w[p11] > w[p] + 1:
                    q.append(p11)
                    w[p11] = w[p] + 1

            p1 = p // 1000
            for i in range(10):
                p11 = p1 * 1000 + i*100 + p % 100
                if p11 == p:
                    continue

                if prime[p11] and w[p11] > w[p] + 1:
                    q.append(p11)
                    w[p11] = w[p] + 1
            p1 = p % 1000
            for i in range(10):
                p11 = p1 + (i * 1000)
                if p11 == p :
                    continue
                if prime[p11] and w[p11] > w[p] + 1:
                    q.append(p11)
                    w[p11] = w[p] + 1
                        