
def go():
    l = input()
    n = list(str(input()))
    sum = 0
    for i in n:
        sum += ord(i) - 48
    print(sum)

if __name__ =='__main__':
    go()
