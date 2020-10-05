// 예제: 행렬에서 최소 이동 비용 구하기
// 반드시 재귀 호출을 이용해서 풀라고 하면 ?
#include <iostream>

using namespace std;

int map[3][4] = {{1,3,5,8},
                 {4,2,1,7},
                 {4,3,2,3}};

int minCost(int,int);

int main()
{
    cout<<"Get Mininum cost : recursive only"<<endl;
    int cost = minCost(2,3);
    cout<<cost<<endl;
    return 0;
}

int minCost(int y, int x)
{
    int c = map[y][x];

    if (x == 0 && y == 0) {
        return c;
    }

    if (x == 0) {
        return c + minCost(y-1, x);
    }

    if( y == 0) {
        return c + minCost(y, x-1);
    }

    return min(minCost(y-1,x), minCost(y, x-1)) + c;
}