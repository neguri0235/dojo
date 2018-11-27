#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int ans,n,a[51];

int main()
{
    cin>>n;
    for(int i = 0; i<n; i++) scanf("%d",&a[i]);
    sort(begin(a),begin(a)+n);
    ans = a[0] *a[n-1];
    cout<<ans<<'\n';
    return 0;
}
