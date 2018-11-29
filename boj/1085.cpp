#include <iostream>

using namespace std;

int x,y,w,h,ans;

int main()
{
    cin>>x>>y>>w>>h;

    ans = min(x,y);
    ans = min(ans,w-x);
    ans = min(ans,h-y);
    cout<<ans<<'\n';
    
    return 0;
}
