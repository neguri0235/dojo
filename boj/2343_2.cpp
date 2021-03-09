#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, ans;
int l, r, mid;

bool check(vector<int>&, int);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(l < a[i]) l = a[i];
        r += a[i];
    }

    while( l <= r) {
        mid = (l + r) /2;

        if(check(a,mid)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}

bool check(vector<int>& a, int k)
{
    int count = 1;
    int sum = 0;

    for(int i = 0; i<n; i++){
        if((sum + a[i]) > k) {
            count += 1;
            sum = a[i];
        }else{
            sum += a[i];
        }
    }

    return count <= m;
}