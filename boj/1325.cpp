#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

#define MAX 10001

int m[MAX][2];
int v[MAX];
int vcnt[MAX];
int N,M;
int cnt,vmax;
std::vector<int>iv;

void input();
void solve();

int main()
{
    input();
    solve();

    return 0;
}

#define DBG 0

void print()
{
    if(DBG == 0) return ;
    for(int i = 0; i<M; i++) {
        printf("%d %d\n", m[i][0], m[i][1]);
    }
}

void input()
{
    scanf("%d %d" ,&N,&M);

    for(int i = 0; i<M; i++) {
        scanf("%d %d", &m[i][0], &m[i][1]);
    }

    print();
}


void dfs(int n)
{

    v[n] = 1;
    cnt++;

    if(0) {
        std::cout<<"visit: "<<n<<std::endl;
    }


    for(int i = 0; i<M; i++) {

        if(m[i][1] == n && v[m[i][0]] == 0){
            dfs(m[i][0]);
        }
    }
}

void solve()
{ 
    for(int i = 0; i<M; i++){
        if(v[m[i][1]] == 0) {
            if(0) {
                std::cout<<"----------------"<<std::endl;
                std::cout<<"start from: "<<m[i][1]<<std::endl;
            }

            dfs(m[i][1]);

            vcnt[i] = cnt;
            //std::cout<<"DBG: "<<i<<" = "<<cnt<<std::endl;

            if(cnt >= vmax) {
                vmax = cnt;
            }
        }

        cnt = 0;

        memset(v,0,sizeof(v));
    }


    for(int i = 0; i<= N; i++) {
        if(vcnt[i] == vmax) printf("%d ", i+1);
    }
}

