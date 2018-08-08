/* 메모이제이션 사용, 동적 계획 법
 */

#include <iostream>
#include <cstdio>
#include <cstring>

#define MAX 10

int N;
int ret;

int ws[MAX];
int ps[MAX];
int dp[6][11];


int maxw = 10;


int knap( )
{

    for(int i = 0; i<=N; i++){

        for(int j = 0; j<=maxw; j++){

            if(j + ws[i] <= maxw) {
                dp[i+1][j+ws[i]] = std::max(dp[i+1][j+ws[i]],dp[i][j] + ps[i]);
                ret = std::max(dp[i+1][j+ws[i]],ret);
            }
        }

    }

    return ret;

}




int main()
{

    freopen("in.txt","r",stdin);
    std::cin>>N;

    for(int i = 0; i<N; i++) {
        std::cin>>ws[i];
    }
    
    for(int i = 0; i<N; i++) {
        std::cin>>ps[i];
    }


    memset(dp,-1,sizeof(dp));

    std::cout<<knap()<<std::endl;

    return 0;
}
