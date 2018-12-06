#include <iostream>

using namespace std;


int n;
long long ans;

int main()
{
    ans = 1;
    cin>>n;

    for(int i = 1; i<=n; i++) {
        ans *=i;
    }

    cout<<ans<<'\n';

    return 0;
}
