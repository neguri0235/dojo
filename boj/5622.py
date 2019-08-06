import sys

s = list(map(str,sys.stdin.readline().rstrip()))

ans = 0

for e in s:
    k = ord(e) - ord('A')
    if k >=0 and k <=2:
        ans += 2
    elif k >= 3 and k<=5:
        ans += 3
    elif k >= 6 and k <=8:
        ans += 4
    elif k>=9 and k <=11:
        ans += 5
    elif k>=12 and k <= 14:
        ans += 6
    elif k>=15 and k<= 18:
        ans += 7
    elif k>=19 and k<=21:
        ans += 8
    else:
        ans +=9

print(ans+len(s))
    