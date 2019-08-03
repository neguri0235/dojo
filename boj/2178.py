'''
4 6
101111
101010
101011
111011
'''
import sys
from collections import deque



if __name__ == "__main__":

    sys.stdin = open('2178.txt','r')

    n,m = map(int,sys.stdin.readline().split())

    A = []
    D = [ [0 for _ in range(m)] for _ in range(n)]
    D[0][0] = 1
    for i in range(n):
        a = list(sys.stdin.readline().rstrip())
        A.append(a)
    '''
    for e in A:
        print(e)

    for e in D:
        print(e)
    '''
    q = deque([((0,0))])
    A[0][0] = '0'
    dy = [-1,1,0,0]
    dx = [0,0,-1,1]
    while len(q):
        a = q.popleft()
        weight = D[a[0]][a[1]]
        for i in range(4):
            ny = a[0] + dy[i]
            nx = a[1] + dx[i]

            if ny >= n or nx >= m or ny < 0 or nx < 0:
                continue

            if A[ny][nx] == '1':
                A[ny][nx] = '0'
                D[ny][nx] = weight + 1
                next_position = (ny,nx)
                q.append(next_position)
'''
    for e in D:
        print(e)
'''
print(D[n-1][m-1])
        