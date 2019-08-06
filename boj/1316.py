import sys

def check(s):
    D = [0]*26

    p = -1
    for e in s:
        index = ord(e) - ord('a')
        
        if p == index:
            continue
        elif D[index]:
            return 0
        else:
            p = index
            D[index] = 1
    
    return 1

tc = int(input())

ans = 0
for _ in range(tc):
    s = sys.stdin.readline().rstrip()
    ans += check(s)

print(ans)

