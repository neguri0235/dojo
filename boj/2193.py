n = int(input())

A = [0] * 100

A[0] = 0
A[1] = 1
A[2] = 1

for i in range(3,100):
    A[i] = A[i-1] + A[i-2]

print(A[n])