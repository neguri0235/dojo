import sys
import collections

deq = collections.deque()
N, K = map(int, sys.stdin.readline().split())

for i in range(N):
    person, item = map(int, sys.stdin.readline().split())
    deq.append((person,item))

order = 0
tot_sum = 0
remain = [0]*K
person = [0]*K

while order != N:
    for i in range(len(remain)):
        if remain[i] == 0 and len(deq) != 0:
            data = deq.popleft()
            person[i], remain[i] = data[0], data[1]
    
    for i, e in reversed(list(enumerate(remain))):
        remain[i] -= 1
        if remain[i] == 0:
            order +=1
            tot_sum += order * person[i]

print(tot_sum)

