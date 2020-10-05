// 타일 채우기
// 2*N 개의 크기의 타일을 2*1로 채워보자
// 재귀를 이용하자

#include <iostream>

using namespace std;

int countWay(int);

int main()
{
    int n = 0;
    cin>>n;
    cout<<countWay(n)<<endl;
    return 0;
}

int countWay(int i)
{
    if(i == 1) return 1;
    if(i == 2) return 2;
    
    return countWay(i-1) + countWay(i-2);
}