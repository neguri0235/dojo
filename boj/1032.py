import sys
n = int(input())
ans = ['?'] * 51
data = []
for _ in range(n):
    s = sys.stdin.readline().rstrip()
    data.append(s)
strlen = len(data[0])

for i in range(0,strlen):
    p = data[0][i]
    ans[i] = data[0][i]
    for j in range(1,n):
        if p == data[j][i]:
            continue
        else:
            ans[i] = '?'
            break
#print(ans)
for i in range(0,strlen):
    print(ans[i],end='')