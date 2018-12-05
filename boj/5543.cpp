#include <iostream>

using namespace std;

int a1,a2,a3,b1,b2,amin,bmin,ans;

int main()
{

    cin>>a1>>a2>>a3>>b1>>b2;

    amin = min(min(a1,a2),a3);
    bmin = min(b1,b2);

    ans = amin + bmin - 50;
    cout<<ans<<'\n';

    return 0;
}
