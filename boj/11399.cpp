#include <iostream>
#include <algorithm>

using namespace std;

int n, a[1001];
long sum,ans;

int main()
{
    scanf("%d",&n);

    for(int i = 0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    sort(begin(a),begin(a)+n);


    for(int i = 0; i<n; i++) {
        sum = sum + a[i];
        ans += sum;
    }

    cout<<ans<<'\n';

    return 0;
}
