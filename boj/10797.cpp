#include <iostream>

using namespace std;

int a,n,ans;

int main()
{
    cin>>n;
    n = n%10;

    for(int i = 0; i<5; i++) {
        cin>>a;
        a = a%10;
        if(n == a) ans++;
    }
    cout<<ans<<'\n';
    return 0;
}
