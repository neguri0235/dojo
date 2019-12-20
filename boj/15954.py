import sys
from decimal import *
import math


'''
5 3
1 2 3 4 5
'''

def worker():
    N,K = map(int,sys.stdin.readline().split())
    data = list(map(int, sys.stdin.readline().split()))
#    print("-------")
#    print(data)
    _res = 987654321
    for i in range(N-K+1):
        for j in range(N-K-i+1):
            _sum = 0
            for k in range(K+j):
#                print(data[k+i], end = ' ')
                _sum += data[i+k]
#            print()

            _N = K+j
            _mean = _sum/_N
            _var = 0.0
#            print('N:', _N, ' sum:', _sum, 'mean:', _mean)
            for k in range(_N):
                _var += (data[k+i] - _mean)**2
            _var = _var/_N
#            print(_var, math.sqrt(_var))
            _res = min(_res,_var)

#        print('--------')
#    print('=======')
    print(math.sqrt(_res))
#    print("{0:.11f}".format(math.sqrt(_res)))

if __name__ == "__main__":
#    getcontext().prec = 6
    worker()