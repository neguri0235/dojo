#include <iostream>
#include <vector>

using namespace std;

int ans = 0;

void dfs(vector<int>&a, long long  sum, long long  target, int index)
{
    if(sum == target && index == a.size()){
        ans +=1;
        return;
    }

    if(index >= a.size()) {
        return;
    }

    dfs(a, sum + a[index], target, index+1);
    dfs(a, sum, target, index+1);
}

int main()
{
    ios_base::sync_with_stdio(false);

    int n, s;
    cin>>n>>s;
    vector<int>vec(n);

    for(int i = 0; i<n; i++){
        cin>>vec[i];
    }

    dfs(vec, 0, s, 0);
    if(s == 0) ans -= 1;
    cout<<ans<<endl;
    return 0;
}