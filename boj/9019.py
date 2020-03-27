import collections
import sys 


dbg = 1

def calc(src, tar):

    deq = collections.deque()
    deq.append((src,'S'))

    while len(deq):
        r = deq.popleft()
        num, path = r[0], r[1]

        D = num*2%10000

        if D == tar:
            ret = path+'D'
            ret = ret[1:]
            return ret
        else:
            deq.append((D,path+'D'))

        D = num-1
        if D == 0: D = 9999

        if D == tar:
            ret = path+'S'
            ret = ret[1:]
            return ret
        else:
            deq.append((D,path+'S'))


        s = str(num)
        s += s[0]
        s = s[1:]
        D = int(s)

        if D == tar:
            ret = path+'L'
            ret = ret[1:]
            return ret
        else:
            deq.append((D,path+'L'))


        s = str(num)
        s = s[-1] + s
        s = s[0:-1]
        D = int(s)

        if D == tar:
            ret = path+'R'
            ret = ret[1:]
            return ret
        else:
            deq.append((D,path+'R'))

        
        




n = int(input())

for _ in range(n):
    s, t= map(int, sys.stdin.readline().split())
    r = calc(s,t)
    print(r)

