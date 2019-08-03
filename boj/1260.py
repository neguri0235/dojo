import sys
sys.stdin = open('1260.txt','r')

'''
4 5 1
1 2
1 3
1 4
2 4
3 4
'''
N = 0
M = 0
S = 0
A = [[0]*1001]*1001

def read():
    global N
    global M
    global S
    global A
    N,M,S = map(int,sys.stdin.readline().split())
    print(N,M,S)

    for i in range(1,N+1):
        for j in range(1,N+1):
            print(A[i][j],end=' ')
        print()

    for _ in range(M):
        f,t = map(int,sys.stdin.readline().split())
        A[f][t] = 1
        A[t][f] = 1

    for i in range(1,N+1):
        for j in range(1,N+1):
            print(A[i][j],end=' ')
        print()

if __name__ == "__main__":
#    read()

    B = [[0]*10]*10

    for i in range(0,10):
        for j in range(0,10):
            B[i][j] = i * j
            print(B[i][j],end = ' ')
        print()
    for i in range(0,10):
        for j in range(0,10):
            print(B[j][i],end= ' ')
#            print(j,i,end= ' ')
        print()