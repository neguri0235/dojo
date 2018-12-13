#include <iostream>

using namespace std;

int a,b,c,ans;
int main()
{
    cin>>a>>b>>c;

    ans =  a*b - c;
    
    if(ans < 0) ans = 0;

    cout<<ans<<'\n';
    return 0;
}
