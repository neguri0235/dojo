// 예제: 행렬에서 최소 이동 비용 구하기
// 이동할 때 오른쪽, 아래쪽으로만 이동하지 않고 우하향 대각선으로 이동하려고
// 할 때 어떻게 해야 할까?

#include <iostream>

int map[3][4] = {{1,3,5,8},
                 {4,2,1,7},
                 {4,3,2,3}};

int MEM[3][4] = {0};

int minCost();
int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    std::cout<<"Get minimum cost : Move to 3 way"<<'\n';
    int cost = minCost();
    std::cout<<cost<<'\n';
    return 0;
}

int minCost()
{
    MEM[0][0] = map[0][0];

    for(int i = 1; i<4; i++){
        MEM[0][i] = map[0][i] + MEM[0][i-1];
    }

    for(int i = 1; i<3; i++){
        MEM[i][0] = map[i][0] + MEM[i-1][0];
    }

    for(int i = 1; i<3; i++){
        for(int j = 1; j<4; j++){
            MEM[i][j] = min(min(MEM[i-1][j], MEM[i][j-1]), MEM[i-1][j-1]) + map[i][j];
        }
    }
    return MEM[2][3];
}
