// 1에서 n 까지 양의 정수 합을 계산하기

#include <iostream>

using namespace std;


int sum(int i)
{
    if(i == 1) return 1;
    else if(i <= 0) return 0;
    else return  (i + sum(i-1));
}

int sum2(int i)
{
    return (i<=0) ? 0 :((i == 1) ? 1: (i + sum2(i-1)));

}

int main()
{
    int n = 0;
    cin>>n;
    cout<<sum(n)<<endl;
    cout<<sum2(n)<<endl;
    return 0;
}

