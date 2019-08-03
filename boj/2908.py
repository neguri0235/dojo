import sys
data = list(map(str,sys.stdin.readline().split()))
print(max(int(data[0][::-1]),int(data[1][::-1])))