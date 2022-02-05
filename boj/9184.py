import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')

D = [[[0 for _ in range(52)] for _ in range(52)]for _ in range(52)]


def go(a, b, c):
    
    if D[a][b][c]:
        return D[a][b][c]
    
    if a<= 0 or b <=0 or c<= 0:
        D[a][b][c] = 1
        return D[a][b][c]

    if a > 20 or b > 20 or c > 20:
        D[a][b][c] = go(20, 20, 20)
        return D[a][b][c]
    
    if a < b and b < c:
        ans = go(a, b, c-1) + go(a, b-1, c-1) - go(a, b-1, c)
        D[a][b][c] = ans
        return ans
    else:
        ans = go(a-1, b, c) + go(a-1, b-1, c) + go(a-1, b, c-1) - go(a-1, b-1, c-1)
        D[a][b][c] = ans
        return ans                
    

while True:
    a, b, c = map(int, sys.stdin.readline().split())
    if a == -1 and b == -1 and c == -1:
        break
    if a <= 0 or b <= 0 or c <= 0:
        ans = 1 
        print(f'w({a}, {b}, {c})' f' = {ans}')
    else:        
        aa , bb, cc = a, b, c
        if a <= 0:
            a = 0
        if b <= 0:
            b = 0
        if c <= 0:
            c = 0
        
        go(a, b, c)

        ans = 0
        if aa < 0 or bb < 0 or cc < 0:
            ans = 1
        else:
            ans = D[aa][bb][cc]        
        print(f'w({aa}, {bb}, {cc})' f' = {ans}')
    