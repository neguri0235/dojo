#include <iostream>

using namespace std;

long long a[68];
int n,t;

int main()
{

    a[0] = a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    for(int i = 4; i<=67; i++) {

        a[i] = a[i-1] + a[i-2] + a[i-3] + a[i-4];
    }

    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>t;
        cout<<a[t]<<'\n';
    }
    return 0;
}
