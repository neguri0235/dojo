s = input()

data = [0]*26

for e in s:
    data[ord(e) - ord('a')] += 1
for e in data:
    print(e,end= ' ')