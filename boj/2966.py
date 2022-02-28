import sys

dbg = 0
if dbg: sys.stdin = open('in.txt','r')
n = int(input())
a = list(sys.stdin.readline().rstrip())
A = ['A','B','C']*34
B = ['B','A','B','C']*26
C = ['C','C','A','A','B','B']*20

Adrian, Bruno, Goran = 0 , 0, 0

for i in range(len(a)):
    if a[i] == A[i]:
        Adrian += 1
    if a[i] == B[i]:
        Bruno += 1
    if a[i] == C[i]:
        Goran += 1
    
if Adrian == Bruno == Goran:
    print(Adrian)
    print('Adrian')
    print('Bruno')
    print('Goran')
elif Adrian > Bruno and Adrian > Goran:
    print(Adrian)
    print('Adrian')
elif Adrian < Bruno and Bruno > Goran:
    print(Bruno)
    print('Bruno')
elif Adrian < Goran and Bruno < Goran:
    print(Goran)
    print('Goran')
elif Adrian == Goran:
    print(Goran)
    print('Adrian')
    print('Goran')
elif Adrian == Bruno:
    print(Bruno)
    print('Adrian')
    print('Bruno')
elif Goran== Bruno:
    print(Goran)
    print(Bruno)
    print('Bruno')
    print('Goran')
else:
    pass

