#include <iostream>

using namespace std;
int a,b,a1,a2,a3,a4;

int main()
{
    cin>>a>>b;


    a1 = a*(b%10);
    a2 = a*(b%100/10);
    a3 = a*(b/100);
    a4 = a*b;

    cout<<a1<<'\n';
    cout<<a2<<'\n';
    cout<<a3<<'\n';
    cout<<a4<<'\n';

    return 0;
}
