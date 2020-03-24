import sys
from collections import deque

dbg = False
find = False
dy = [-1,0,1,0]
dx = [0,1,0,-1]

N, M = map(int,sys.stdin.readline().split())

m  = [ list(sys.stdin.readline().rstrip()) for _ in range(N)]
dp = [ [0 for _ in range(M)] for _ in range(N)]


ry = 0
rx = 0
by = 0
bx = 0
ty = 0
tx = 0
cnt = 0

for i in range(N):
    for j in range(M):
        if m[i][j] == 'R':
            ry , rx = i, j
        if m[i][j] == 'B':
            by, bx = i, j
        if m[i][j] == 'O':
            ty, tx = i, j

#print('R: ',ry, rx)
#print('B: ',by, bx)
#print('T: ',ty, tx)


def is_blue_dead(lby, lbx, d):
    if dbg == True: print(lby, lbx, d)
    if lby == ty and lbx == tx:
        return True

    while m[lby][lbx] != ' #' :
        if lby < 0 or lbx < 0 or lbx >= (M-1) or lby >= (N-1):
            break 
        lby += dy[d]
        lbx += dx[d]
        if dbg == True:  print(lby, lbx, d, m[lby][lbx])
        if lbx == tx and lby == ty:
            return True
    return False
    

dq = deque()
dq.append((ry,rx,by,bx, -1))



while len(dq) != 0:
    pos = dq.popleft()
    y, x, by, bx, d = pos[0], pos[1],pos[2], pos[3], pos[4]
    if y == ty and x == tx:
        if dbg == True: print('find !')
        find = True
        if is_blue_dead(by, bx, d) == True:
            dp[ty][tx] =100

        break

    if dbg == True: print('pos: ',y,x)
    for i in range(4):
        ny = y + dy[i]
        nx = x + dx[i]
        
        if ny <= 0 or nx <= 0 or ny >=(N-1) or nx >=(M-1):
            continue
        if dbg == True: print('val:', m[ny][nx])
        if m[ny][nx] == '.' or m[ny][nx] == 'O' or m[ny][nx] == 'B':
            m[ny][nx] = i
            if i != d:
                dp[ny][nx] = dp[y][x] + 1
            else:
#                print(ny, nx, y, x)
                dp[ny][nx] = dp[y][x]
# move blue ball
            nby = by + dy[i]
            nbx = bx + dx[i]

            if nby == ty and nbx == tx:
                dp[ty][tx] = 100
#                print('called')
                break
            if dbg == True: print('B: ', nby, nbx, i)
            if m[nby][nbx] == '#':
                nby = by
                nbx = bx
                if dbg == True: print('cannot move B, so ', by, bx)

#            else:
#                nby  = by
#                nbx  = bx
#                print('B(no change:)' , nby, nbx)
            dq.append((ny, nx, nby, nbx, i))

#print(len(dp))
if find == False:
    dp[ty][tx] = 100            
#for e in m:
#    print(e)
c = dp[ty][tx]
#print(c)
if c > 10:
    print(0)
else:
    print(1)
'''
6 7
#######
#R. . . .#
#.###.#
#. . . .##
#..#BO#
#######

4 6
######
##BR##
#O...#
######

'''