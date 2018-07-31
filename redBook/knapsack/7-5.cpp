/* 전체 탐색 수정
 */

#include <iostream>
#include <cstdio>

#define MAX 10

int N;
int ret;

int ws[MAX];
int ps[MAX];


int maxw = 10;


int knap(int n, int w )
{

    if(w > maxw) return -1 ;
    if( n >=N) return 0 ;

    return std::max(knap(n+1,w), knap(n+1, w + ws[n]) + ps[n]);

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


    std::cout<<knap(0,0)<<std::endl;

    return 0;
}
