import sys
import collections

dy = [0,0,-1,1]
dx = [-1,1,0,0]

sys.stdin = open('1012.txt','r')

tc = int(input())

for _ in range(tc):
    num = 0
    M,N,K = map(int,sys.stdin.readline().split())
    A = [ [ 0 for i in range(M+1)] for j in range(N+1)]

    for _ in range(K):
        a,b = map(int, sys.stdin.readline().split())
        A[b][a] = 1

    '''
    for e in A:
        print(e)
    '''
    deq = collections.deque()

    for i in range(0,N):
        for j in range(0,M):
            #print(i,j)
            if A[i][j]:
                num += 1
                A[i][j] = 0
                deq.append((i,j))
                #print(deq)
                while len(deq):
                    y,x = deq.popleft()
                    
                    for k in range(4):
                        ny = y + dy[k]
                        nx = x + dx[k]

                        if ny < 0 or nx < 0 or ny >= N or nx >=M:
                            continue
                        if A[ny][nx]:
                            A[ny][nx] = 0
                            deq.append((ny,nx))
    print(num)            

