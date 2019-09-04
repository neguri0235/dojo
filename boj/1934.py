
import sys 
tc = int(input())
for _ in range(tc):
    a,b = map(int, sys.stdin.readline().split())
    a_,b_ = a,b
    if(a < b):
        a,b = b,a
    while b != 0:
        n = a%b
        a = b
        b = n
    
    print(a_*b_//a)