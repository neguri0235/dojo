def go():
    data = [True]*10001
    
    for i in range(1,10001):

        n = i + i//1000 + i%1000//100 + i%100//10 + i%10
        if n < 10001:
            data[n] = False
    for i in range(1,10001):
        if data[i]:
            print(i)


if __name__ == "__main__":
    go()