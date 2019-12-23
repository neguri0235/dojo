import sys
'''
3
1 5 7
'''
def worker():
    n = int(input())
    data = list(map(int,sys.stdin.readline().split()))
    data.insert(0,0)

    _sum = sum(data)
 
    dp = [x[:] for x in [[0] * (_sum+1)] * (n+1)] 
    _max = data[1] 

    for i in range(1,n+1):
        for j in range(1,_sum+1):          
            
            if dp[i-1][j]:
                dp[i][j] = dp[i-1][j]
            dp[i][data[i]] = 1

            if _max < j:
                continue

            if dp[i-1][j]:
                if j - data[i] >= 0:
                    dp[i][j- data[i]] = 1

                if data[i] - j >= 0:
                    dp[i][data[i]-j] = 1

                if j + data[i] <= _sum:
                    dp[i][j + data[i]] = 1
                    _max = max(_max,j+data[i])


    _empty = 0

#    for i in range(1, _sum+1):
#        if dp[n][i] == 0:
#            _empty += 1
#    print(_empty)

    print(dp[n].count(0) - 1)

if __name__ == "__main__":
    worker()