#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int n, _min, _max,ans,a;

int main()
{
    cin>>n;
    _min = 100;
    for(int i = 0; i<n; i++) {

        scanf("%d",&a);

        _min = min(_min,a);
        _max = max(_max,a);

    }
    if(n ==1) ans = a;
    else ans = _max-_min;
    cout<<ans<<'\n';

    return 0;
}
