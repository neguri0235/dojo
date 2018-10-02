import unittest


def compare(a,b):
    x = a.split()
    y = b.split()

    if(x > y):
        print(x,'>',y)
    elif(x<y):
        print(x,'<',y)
    else:
        print(x,'=',y)

sample = [['0.1.0','0.1.1'],
          ['1.1.5','1.1.3'],
          ['1.0.0.0.1','1.0.0.0.1']];

for i in sample:
     compare(i[0],i[1])
