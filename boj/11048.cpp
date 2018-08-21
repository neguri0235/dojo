#include <iostream>
#include <cstdio>

using namespace std;

int n,m;
int a[1001][1001];
int d[1001][1001];

int main()
{
    cin>>n>>m;
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=m; j++){
            scanf("%d",&a[i][j]);
        }
    }

    d[1][1] = a[1][1];
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=m; j++){
            d[i][j] = std::max(d[i-1][j], d[i][j-1]) + a[i][j];
        }
    }

/*
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=m; j++){
            printf(" %d",d[i][j]);
        }
        cout<<endl;
    }
*/

    cout<<d[n][m]<<endl;
    return 0;
}

#if 0

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
#endif
