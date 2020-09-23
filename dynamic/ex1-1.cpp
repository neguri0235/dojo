// 1 부터 n 까지 factorial 구하기

#include <iostream>

using namespace std;


int fact(int n)
{
    if (n <= 1) return 1;
    else return n * fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;;
    return 0;
}
