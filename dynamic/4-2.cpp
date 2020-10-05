// 예제: 행렬에서 최소 이동 비용 구하기
// 반드시 재귀 호출을 이용해서 풀라고 하면 ?
// 그런데 반복 계산을 줄여보자. 캐시를 사용하자

#include <iostream>

using namespace std;

int map[3][4] = {{1,3,5,8},
                 {4,2,1,7},
                 {4,3,2,3}};

int dp[3][4] = {0};

int minCost(int,int);

int main()
{
    int cost = minCost(2,3);
    cout<<"Get minimum cost : recursive + cache"<<endl;
    cout<<cost<<endl;
    return 0;
}


int minCost(int i, int j)
{

    if(dp[i][j]) return dp[i][j];

    if(i == 0 && j == 0) {
        return dp[i][j] = map[i][j];
    }

    if( i == 0) {
        return dp[i][j] = minCost(i,j-1) + map[i][j];
    }

    if( j == 0) {
        return dp[i][j] + minCost(i-1, j) + map[i][j];
    }

    return dp[i][j] = map[i][j] + min(minCost(i-1, j), minCost(i, j-1));
}