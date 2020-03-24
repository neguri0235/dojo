import sys

ret = []
c = 0

def dump(m_, y, x):
    for i in range(y):
        for j in range(x):
            print(m_[i][j], end = ' ')
        print()
    print('------------------')

dy = [-1, 1, 0, 0]
dx = [0, 0, 1, -1]

def dfs(m, y, x, M, N):
    global c
    c += 1
    #print('called', y, x)
    for i in range(4):
        ny = dy[i] + y
        nx = dx[i] + x
        if ny < 0 or nx < 0 or ny >=M or nx >= N:
            continue

        if m[ny][nx] == 0:
            m[ny][nx] = 1
#            c += 1
            dfs(m, ny, nx, M, N)


if __name__ == "__main__":
    sys.setrecursionlimit(2000)
    M, N, K = map(int, sys.stdin.readline().split())

    m = [ [0 for _ in range(N)] for _ in range(M)]

    #dump(m, M, N)

    for _ in range(K):
        x1, y1, x2, y2 = map(int, sys.stdin.readline().split())

        for i in range(y1, y2):
            for j in range(x1, x2):
                m[i][j] = 1
#    dump(m, M, N)
    for i in range(M):
        for j in range(N):
            c = 0
            if m[i][j] == 0:
                m[i][j] = 1
                dfs(m, i, j, M, N)
            if c != 0:  ret.append(c)
            #print("----")
    ret = sorted(ret)
    print(len(ret))
    for e in ret:
        print(e, end = ' ')
