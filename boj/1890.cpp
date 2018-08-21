#include <iostream>

using namespace std;

int n;
int a[101][101];
long long d[101][101];

int main()
{
    cin>>n;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }

    d[0][0] = 1;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){

            if(a[i][j] > 0 && d[i][j]  > 0) {
                if(j + a[i][j] < n)
                    d[i][j + a[i][j]] += d[i][j];

                if(i + a[i][j] < n)
                    d[i+a[i][j]][j] += d[i][j];
            }
        }
    }

    cout<<d[n-1][n-1]<<endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<d[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}


#if 0
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

#endif
