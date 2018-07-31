/* 메모이제이션 사용
 */

#include <iostream>
#include <cstdio>
#include <cstring>

#define MAX 10

int N;
int ret;

int ws[MAX];
int ps[MAX];
int d[6][11];


int maxw = 10;


int knap(int n, int w )
{

    if(w > maxw) return -1;

    if(n>=N) return 0;

    if(d[n][w] > 0) return d[n][w];

    return d[n][w] = std::max(knap(n+1,w), knap(n+1, w+ws[n] + ps[n]));

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


    memset(d,-1,sizeof(d));

    std::cout<<knap(1,0)<<std::endl;

    for(int i = 0; i<5; i++) {

        for(int j = 0; j<5; j++)
        std::cout<<d[i][j]<<" ";
        std::cout<<std::endl;

    }

    return 0;
}
