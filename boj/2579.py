import sys

def go(n):
    D = [0]*(n+1)
    A = [0]*(n+1)
    for i in range(1,n+1):
        A[i] = int(sys.stdin.readline())
    
    D[1] = A[1]
    D[2] = A[1] + A[2]

    for i in range(3,n+1):
        D[i] = max(A[i-1] + D[i-3], D[i-2]) + A[i]

    print(D[n])

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    go(n)