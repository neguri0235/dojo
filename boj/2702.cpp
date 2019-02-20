#include <iostream>

using namespace std;


void go(int m)
{
    int a = m/25;
    cout<<a<<' ';
    int b = (m - (a*25))/10;
    cout<<b<<' ';
    int c = (m - (a*25) - (b*10))/5;
    cout<<c<<' ';
    cout<<m%5<<'\n';
}


int main()
{
    int tc,money;
    cin>>tc;
    while(tc--) {
        cin>>money;
        go(money);
    }
    return 0;
}
