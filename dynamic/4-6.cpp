// 특정 점수에 도달하는 경우의 수 구하기
// 3점, 5점, 10 점수를 이용하여 13점에 도달하는 경우의 수
// 재귀를 이용해 보자

#include <iostream>

using namespace std;

int getWay(int);
int getWayM(int);

int MEM[100] = {0};

int main()
{
    int n = 0;
    cin>>n;
    //cout<<getWay(n)<<endl;
    cout<<getWayM(n)<<endl;

    return 0;
}

int getWay(int i)
{
    if (i < 0) return 0;
    if (i == 0) return 1;

    return getWay(i-10) + getWay(i-5) + getWay(i-3);
}

// 메모를 이용해서 시간을 줄여보자
//n = 94 일때 곧바로 응답이 오는지 보자
// 못 풀었다
int getWayM(int i)
{
    if(i < 0) return 0;
    if(i == 0) return 1;
    
    return MEM[i];
}