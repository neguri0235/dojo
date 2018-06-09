#include <iostream>
#include <string.h>

#define DBG 0
using namespace std;

int m[1001][2];
int v[1001];


int TC;
int N;
int cnt;

void input();
void solve();
void print();
void dfs(int);

int main()
{

    input();
    return 0;
}


void input()
{
    int in;

    if(DBG) freopen("1.txt","r",stdin);
    scanf("%d",&TC);

    for(int i = 0; i<TC; i++) {

        scanf("%d",&N);
        for(int j = 0; j<N; j++) {
            scanf("%d",&in);
            m[j][0] = j+1;
            m[j][1] = in;
        }
        solve();
    }
}


void solve()
{
    print();

    for(int i = 0; i<N ; ++i){

        if(v[m[i][0]] == 0)  {
            cnt++;
            dfs(m[i][0]);
        }
    }

    std::cout<<cnt<<endl;
    memset(v,0,sizeof(v));
   // memset(m,0,sizeof(m));
    cnt = 0;

}

void print()
{
    if(DBG == 0 ) return;
    std::cout<<"-----------------------------"<<std::endl;
    for(int i = 0; i<N; i++) {
        std::cout<<m[i][0]<<" "<<m[i][1]<<endl;
    }
}


void dfs(int n)
{
    v[n] = 1;

    if(DBG) std::cout<<"visit: "<<n<<std::endl;

    for(int i = 0; i<N; i++) {

        if(m[i][0] == n &&  v[m[i][1]] == 0) 
            dfs(m[i][1]);
    }

}
