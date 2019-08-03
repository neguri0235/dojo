n = int(input())

#limit = 1000000001
#limit  = 100
A = [0]
D = [1]

i = 1
sum = 1
while True:
    if sum >= n:
        break
    A.append(A[i-1] + 6)
    D.append(A[i] + D[i-1])
    sum = D[i]
    i = i+1
print(i)

#print(A)
#print(D)
