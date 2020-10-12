// 직사각형에서 경로의 수를 구하기
// 다아내믹 프로그래밍으로 풀어보기
// 방의 크기는 2 X 3

#include <iostream>

#define DBG 1

using namespace std;

int numOfPath(int,int);

int main()
{
    cout<<numOfPath(2,3);
    return 0;
}


int numOfPath(int n, int m)
{
    int MEM[n+1][m+1] = {0};
    
    for(int i = 0; i<=n; i++){
        MEM[i][0] = 1;
    }

    for(int i = 0; i<=m; i++){
        MEM[0][i] = 1;
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            MEM[i][j] = MEM[i-1][j] + MEM[i][j-1];
        }
    }

#ifdef DBG
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=m; j++){
            cout<<MEM[i][j]<<' ';
        } cout<<endl;
    }
#endif
    return MEM[n][m];
}