import sys
import itertools

# input
dbg = False
if dbg: sys.stdin = open("in.txt", "r")

n = int(input())
a = list(sys.stdin.readline().split())

# debug
if dbg: print('##',n, a)

mn = [i for i in range(0, n+1)]
mx = [ i for i in range(9, 9-n-1, -1)]

if dbg: print('##',mn, mx)


def valid(perm, num):
    for i in range(len(perm)):
        if perm[i] == '<' and num[i] > num[i+1]:
            return False
        if perm[i] == '>' and num[i] < num[i+1]:
            return False
    return True

for perm in itertools.permutations(mx):
    if valid(a, perm):
        for e in perm:
            print(e, end='')
        print()
        break

for perm in itertools.permutations(mn):
    if valid(a, perm):
        for e in perm:
            print(e, end='')
        print()
        break


