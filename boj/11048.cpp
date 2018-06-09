#include <iostream>

using namespace std;

int N,M;
int m[1001][1001];
#define DBG 0

void input();
void solve();

int main()
{
    input();
    solve();

    return 0;
}


void print()
{

    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){

            printf("%d ",m[i][j]);
        }

        printf("\n");
    }

}


void input()
{
    if(0) freopen("1.txt","r",stdin);

    scanf("%d %d",&N,&M);

    for(int i = 1; i<=N; i++){
        for(int j = 1; j<=M; j++){

            scanf("%d",&m[i][j]);
        }
    }

    //print();
}



void solve()
{
    for(int i = 1; i<=N; i++){
        for(int j = 1; j<=M; j++){

            m[i][j] = (m[i-1][j] > m[i][j-1] ? m[i-1][j]: m[i][j-1]) + m[i][j];
        }
    }

    cout<<m[N][M]<<endl;
    //print();
}

