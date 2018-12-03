#include <iostream>

using namespace std;

int n,ans,c;

int main()
{
    cin>>n;

    /*

    for(int i = 5; i<=n; i++) {
        if(i%5 == 0) ans++;
        if(i%25 == 0) ans++;
        if(i%125 == 0) ans++;
    }
    */

    while(n) {
        n = n/5;
        c = c+n;
    }

   // cout<<ans<<'\n';
    cout<<c<<'\n';
    return 0;
}
