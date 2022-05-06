

def makeHex(i):
    p = []
    while i:
        q = i%16
        p.append(q)
        i = i//16
    return sum(p)

def makeTwv(i):
    p = []
    while i:
        q = i%12
        p.append(q)
        i = i//12
    return sum(p)


def makeDec(i):
    p = list(str(i))
    q = sum(map(int, p))
    return q

for i in range(1000, 10000):
    a = makeHex(i)
    b = makeTwv(i)
    c = makeDec(i)

    if a == b == c:
        print(i)