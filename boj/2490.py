import sys

B = ['A','B','C','D','E']

for _ in range(3):
#    A = list(map(int,sys.stdin.readline().split()))
#    cnt = A.count(0)-1
    print(B[list(map(int,sys.stdin.readline().split())).count(0)-1])
    