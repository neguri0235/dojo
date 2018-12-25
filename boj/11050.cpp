#include <iostream>

using namespace std;

int n,r,ans;

int go(int n_, int r_)
{
    if((n_ == r_) || (r_ == 0)) return 1;

    return go(n_-1, r_-1) + go(n_-1,r_);
}


int main()
{
    cin>>n>>r;
    ans = go(n,r);
    cout<<ans<<endl;
    return 0;
}
