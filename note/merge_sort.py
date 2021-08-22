# merge sort

def merge_sorts(a):
    n = len(a)

    if n<=1:
        return a

    mid = n//2
    g1 = merge_sorts(a[:mid])
    g2 = merge_sorts(a[mid::])

    result = []

    while g1 and g2:
        if g1[0] < g2[0]:
            result.append(g1.pop(0))
        else:
            result.append(g2.pop(0))

    while g1:
        result.append(g1.pop(0))

    while g2:
        result.append(g2.pop(0))

    return result


d = [6, 8, 3, 9, 10, 1, 2, 3, 7, 5]

print(d)
print('After Sort')
print(merge_sorts(d))


def merge_sort(a):
    n = len(a)
    if n<= 1:
        return a

    mid = n//2
    g1 = a[:mid]
    g2 = a[mid:]

    merge_sort(g1)
    merge_sort(g2)

    i1 = 0
    i2 = 0
    ia = 0

    while i1 < len(g1) and i2 < len(g2):
        if g1[i1] < g2[i2]:
            a[ia] = g1[i1]
            i1 += 1
            ia += 1
        else:
            a[ia] = g2[i2]
            i2 += 1
            ia += 1

    while i1 < len(g1):
        a[ia] = g1[i1]
        i1 += 1
        ia += 1
    while i2 < len(g2):
        a[ia] = g2[i2]
        i2 += 1
        ia += 1



d = [6, 8, 3, 9, 10, 1, 2, 4, 7, 5]

merge_sort(d)
print(d)
