import sys

a = list(sys.stdin.readline().rstrip())


b = []

for e in a:
    if ord(e) - 3 >= ord('A'):
        b.append(chr(ord(e)-3))
    else:
        i = ord(e) + 23
        b.append(chr(i))


print(''.join(b))