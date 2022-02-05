import sys
dbg = 1
if dbg: sys.stdin = open('in.txt', 'r')

a = list(sys.stdin.readline().rstrip())
b = list(sys.stdin.readline().rstrip())

# make pattern table
def preprecessing(p):
    pi = [ 0 for _ in range(len(p))]
    j = 0
    for i in range(1, len(p)):
        while j > 0 and p[i] != p[j]:
            j = pi[j-1]

        if p[i] == p[j]:
            pi[i] = j + 1
            j += 1
        else:
            pi[i] = 0
    return pi
#baekjoon
# aek
def kmp(a, b):
    ans = 0
    pi = preprecessing(b)
    j = 0
    for i in range(0,len(a)):
        while j > 0 and a[i] != b[j]:
            j = pi[j-1]
        if a[i] == b[j]:
            if j == (len(b)-1):
                ans = 1
            else:
                j += 1
    return ans


print(kmp(a,b))