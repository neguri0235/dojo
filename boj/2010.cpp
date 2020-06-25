#include <iostream>
#include <vector>

using namespace std;


int n, ans,a;

int main()
{
    ios_base::sync_with_stdio(false);

    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a;
        ans += a-1;
    }
    cout<<ans<<'\n';
    return 0;
}
