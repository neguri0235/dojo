// 수평 방향과 수직 방향의 도로가 2차원 격자를 이루고 있습니다.
// 현재 위치는 (0,0) 이며 (x, y) 지점으로 이동하고자 할때 모든 경로의 수를 구해 보자

#include <iostream>

using namespace std;

int n, m;

int cache[101][101];

int numOfPath(int n, int m)
{
    if(n == 0 && m == 0) return 0;
    if(n == 0 || m == 0) return 1;
    if(cache[n][m]) return cache[n][m];
    return cache[n][m] = numOfPath(n-1, m) + numOfPath(n, m-1);
}

int main()
{
    cin>>n>>m;
    cout<<numOfPath(n,m)<<endl;
    return 0;
}