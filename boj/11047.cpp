#include <iostream>

using namespace std;

int n,ans,idx,a[11];
long long k;

int main()
{

    cin>>n>>k;
    for(int i = 0; i<n; i++) {
        cin>>a[i];
        if(a[i] < k) idx = i;
    }

    for(int i = idx ; i >= 0; i--){
//        cout<<a[i]<<" will start"<<'\n';
        if(k >= 0 && k/a[i] >=1 ) { 
            ans += k/a[i];
            k -= k/a[i] * a[i];
//            cout<<ans<<" "<<k<<endl;
        }
    }

    cout<<ans<<'\n';

    return 0;
}
