// 점화식으로 제곱 계산하기

#include <iostream>

using namespace std;

int pow(int x, int y)
{
    if (y == 0) return 1;
    else if (y == 1){ return x;}
    else return x * pow(x,y-1);
}

int main()
{
    int x,y;
    cin>>x>>y;

    cout<<pow(x,y)<<endl;

    return 0;
}
