#include <iostream>
#include <vector>

using namespace std;

int n, m, l, r, mid, ans;

int check(vector<int>&a, int k)
{
    int c = 0;
    int t1 = a[0];
    int t2 = a[0];

    for(int i = 1; i<n; i++){
        if(t1 > a[i]) t1 = a[i];
        if(t2 < a[i]) t2 = a[i];
        if(t2 -t1 > k) {
            c += 1;
            t1 = t2 = a[i];
        }
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(r < a[i]) r = a[i];
    }
    
    while ( l <= r) {
        mid = (l+r)/2;
        if(check(a, mid) <= m){
            r = mid -1;
            ans = mid;
        }else{
            l = mid + 1;
        }

    }

    cout<<ans<<endl;

    return 0;
}