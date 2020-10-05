// 예제: 행렬에서 최소 이동 비용 구하기
// 그냥 한번 풀어보자

#include <iostream>

using namespace std;

int map[3][4] = {{1,3,5,8},
                 {4,2,1,7},
                 {4,3,2,3}};
int dp[3][4] = {{99,99,99,99},{99,99,99,99},{99,99,99,99}};

int main()
{
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(i == 0 && j == 0) {
                dp[i][j] = map[i][j];
            }else if( i == 0){
                dp[i][j] = map[i][j] + dp[i][j-1];
            }else if(j == 0){
                dp[i][j] = map[i][j] + dp[i-1][j];
            }else{
                dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + map[i][j];
            }
        }
    }
    cout<<dp[2][3]<<endl;
    return 0;
}