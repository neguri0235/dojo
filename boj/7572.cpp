#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;

    int a = 2008-n;
    int b = 2004-n;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    #ifdef DBG
    //cout<<a<<endl;
    #endif

    char f = (a%12)+'A';
    int s = b%10;
    cout<<f<<s<<endl;

    return 0;
}