/* 일반적인 전체 탐색으로 풀기
 */

#include <iostream>
#include <cstdio>

#define MAX 10

int N;
int ret;

int ws[MAX];
int ps[MAX];


int maxw = 10;


void knap(int n, int w, int p)
{

    if(w > maxw) return ;

    ret = std::max(ret, p);

    if( n >=N) return ;

    knap(n+1,w,p);
    knap(n+1, w + ws[n+1], p+ ps[n+1]);

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

    knap(0,0,0);

    std::cout<<ret<<std::endl;

    return 0;
}
