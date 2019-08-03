import sys
N,K = map(int, sys.stdin.readline().split())

queue = []

D = [0] * 100002
W = [0] * 100002
queue.append(N)
D[N] = 1
W[N] = 0
next = N
curr = N

while True:
    curr = queue[0]
    del(queue[0])

#    print(curr)

    if curr == K:
        break

    weight = W[curr]

    next = curr+1
    if next <= 100001 and D[next] == 0:
        D[next] = 1
        queue.append(next)
        W[next] = weight + 1
 
    next = curr-1
    if next >= 0 and D[next] == 0:
        D[next] = 1
        queue.append(next)
        W[next] = weight + 1
 
    next = curr*2
    if next <= 100001 and D[next] == 0:
        D[next] = 1
        queue.append(next)
        W[next] = weight + 1    

print(W[K])

