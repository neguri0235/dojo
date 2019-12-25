plain = input()

for e in plain:
    if e >= 'A' and e <= 'Z':
        if ord(e)+13 > ord('Z'):
            print(chr(ord('A') + (ord(e) + 12 - ord('Z'))), end = '')
        else:
            print(chr(ord(e) + 13),end='')

    elif e >= 'a' and e <= 'z':
        if ord(e)+13 > ord('z'):
            print(chr(ord('a') + (ord(e) + 12 - ord('z'))), end = '')
        else:
            print(chr(ord(e) + 13),end='')
    else:
        print(e,end='')
print()