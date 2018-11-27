#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int n,a[51],b[51],ans;

int main()
{
    cin>>n;
    for(int i = 0; i<n ;i++) {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i<n ;i++) {
        scanf("%d",&b[i]);
    }


    sort(begin(a),begin(a)+n);
    sort(begin(b),begin(b)+n,[](int a, int b){return a > b;});


#if  0
    for(int i = 0; i<n; i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
    for(int i = 0; i<n; i++) {
        cout<<b[i]<<' ';
    }
    cout<<'\n';
#endif

    for(int i = 0; i<n; i++) {
        ans += a[i] * b[i];
    }

    cout<<ans<<'\n';

    return 0;
}
