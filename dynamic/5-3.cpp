// 직사각형에서 경로의 수를 구하기
// 재귀로 풀어 보자
// 방의 크기는 2 X 3

#include <iostream>

using namespace std;

int numOfPath(int,int);

int main()
{
    cout<<numOfPath(2,3);
    return 0;
}


int numOfPath(int n, int m)
{
    if(n == 0 && m == 0) return 0;
    
    if(n == 0 || m == 0) return 1;

    return numOfPath(n-1, m) + numOfPath(n, m-1);
}