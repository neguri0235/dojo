
count = 0
for i in range(0,15+1): # 10
    for j in range(0,15+1): # 50
        for k in range(0,10+1): #100
            for l in range(0,2+1): #500
               if i + j + k + l <= 15:
                   a = i*10 + j*50 + k*100 + l*500
                   if a == 1000:
                       count += 1
print(count)


