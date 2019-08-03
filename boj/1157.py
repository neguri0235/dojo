import sys

s = list(sys.stdin.readline().upper().rstrip())
data = [0]*26
for e in s:
    data[ord(e) - ord('A')] += 1

freq = 0
idx = 0
same = False
#print(data)
for i in range(0,len(data)):
    if data[i] > freq:
        freq = data[i]
        idx = i
        same = False
    elif data[i] == freq:
        same = True

if same:
    print('?')
else:
#    print(idx)
    for i in range(len(data)):
        if i == idx:
            print(chr(i+ord('A')))
