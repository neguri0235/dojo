#include <iostream>

#define DBG 1
#define MAX  101

using namespace std;

typedef unsigned long long ll;

int N;
ll sol;
int m[MAX][MAX];
ll d[MAX][MAX];


void input();
void solve();
void print();

int main()
{
    input();
    solve();
    return 0;
}


void input()
{

    if(DBG) freopen("1.txt","r",stdin);

    scanf("%d",&N);
    for(int i = 0; i<N; ++i){
        for(int j  = 0; j<N; ++j) {
            scanf("%d",&m[i][j]);
        }
    }
}


void print()
{
    if(DBG == 0) return;

    for(int i = 0; i<N; ++i){
        for(int j  = 0; j<N; ++j) {
            printf("%d",m[i][j]);
        }
        printf("\n");
    }

    std::cout<<"----------------"<<std::endl;

    for(int i = 0; i<N; ++i){
        for(int j  = 0; j<N; ++j) {
            printf("%lld ", d[i][j]);
        }
        printf("\n");
    }
}

void solve()
{

    d[0][0] = 1;

    for(int i = 0 ; i< N; i++) {
        for(int j = 0; j<N; j++) {

            int v = m[i][j];

            if(i == N-1 && j == N-1) break;

            if( ( i + v) < N) {
                d[i+v][j] += d[i][j];
            }

            if( ( j + v) <N) {
                d[i][j+v] += d[i][j];
            }
        }
    }

    print();
    std::cout<<d[N-1][N-1]<<std::endl;
}

