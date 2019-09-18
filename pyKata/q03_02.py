for i in range(1, 101):
    flag = False
    for j in range(1, 101):
        if i % j == 0:
            flag = not flag
    if flag:
        print(i,end=' ')