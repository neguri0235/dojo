#include <iostream>

using namespace std;

int a[5],ans,sum;

int main()
{
    for(int i = 0; i<5; i++) {
        cin>>a[i];
    }

    for(int i = 0; i<5; i++) {
        sum += a[i]*a[i];
    }

    ans = sum%10;
    cout<<ans<<'\n';
    return 0;
}
