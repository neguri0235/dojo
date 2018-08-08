#include <iostream>
#include <cstring>
#include <cstdio>


int N,W;

int ws[1001];
int ps[1001];

#ifdef dimen
unsigned int dp[1001][10001];
unsigned int ret;
#else

unsigned int dp[10001];

#endif

/*
int knap(int n, int w)
{

    if(w > W) return -1;
    if(n >= N) return 0;

    return std::max(knap(n+1, w), knap(n+1, w + ws[n]) + ps[n]);

}
*/

/*
int knap(int n, int w)
{
    if(w > W) return -1;
    if(n >=N) return  0;

    if(dp[n][w] >= 0) return dp[n][w];

    return dp[n][w] = std::max(knap(n+1,w), knap(n+1,w+ws[n]) + ps[n]);


}
*/

/*

int knap(int n, int w)
{

    for(int i = 0; i<=N; i++){
        for(int j = 0; j<=W; j++){

            if(j + ws[i] <= W) {
                dp[i+1][j+ws[i]] = std::max(dp[i+1][j+ws[i]],dp[i][j] + ps[i]);
                ret  = std::max(dp[i+1][j+ws[i]],ret);
            }
        }
    }
}
*/

#ifdef dimen
int knap(int n, int w)
{
    for(int i = 1; i<=N; i++) {
        for(int j = 1; j<=W; j++){

            if(j - ws[i]<0) {
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = std::max(dp[i-1][j-ws[i]]+ps[i], dp[i-1][j]);
            }

        }
    }

    return 0;
}
#else

int knap(int n, int w)
{

    for(int i = 1; i<=N; i++){

        for(int j = W; j >= ws[i]; j--){

            dp[j] = std::max(dp[j-ws[i]] + ps[i], dp[j]);
        }
    }

    return 0;
}

#endif



int main()
{

    std::cin>>N>>W;

    for(int i = 1; i<=N; i++){
        scanf("%d %d",&ws[i],&ps[i]);
    }

    knap(0,0);
#ifdef dimen
    std::cout<<dp[N][W]<<std::endl; 
#else
    std::cout<<dp[W]<<std::endl;
#endif

    return 0;
}
