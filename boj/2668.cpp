#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    vector<int>a(n+3);
    for(int i = 0; i<n; i++){
        cin>>a[i+1];
    }
    vector<int>ans;
    for(int i = 1; i<=n; i++){
        if(i ==a[a[i]]) {
            ans.push_back(i);
        }
    }

    sort(ans.begin(), ans.end());
    if(ans.size())
    cout<<ans.size()<<'\n';
    for(auto e : ans){
        cout<<e<<'\n';
    }
    return 0;
}