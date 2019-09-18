
A = [0] * 101

for i in range(2,101):
    for j in range(i,101,i):
        '''
        if A[j] == 1:
            A[j] = 0
        else:
            A[j] = 1
        '''
        # 아래처럼 하면 더 간결함.
        A[j] = not A[j]
#print(A)
for i in range(1,101):
    if A[i] == 0:
        print(i,end=' ')