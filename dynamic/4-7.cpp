// 특정 점수에 도달하는 경우의 수 구하기
// 3점, 5점, 10 점수를 이용하여 13점에 도달하는 경우의 수
// 상향식 다이내믹 프로그래밍을 사용해 보자

#include <iostream>

using namespace std;

int getWay(int);

int MEM[100] = {0};

int main()
{
    int n = 0;
    cin>>n;
    cout<<getWay(n)<<endl;
    return 0;
}

int getWay(int n)
{
    MEM[0] = 1;

    for(int i = 0; i<=n; i++){
        if(i-3 >=0) MEM[i] += MEM[i-3];
        if(i-5 >=0) MEM[i] += MEM[i-5];
        if(i-10 >= 0) MEM[i] += MEM[i-10];
    }
    return MEM[n];
}