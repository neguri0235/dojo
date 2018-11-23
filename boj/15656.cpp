#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m,c[10001],a[10001];
vector<int> v;

void go()
{
    if(v.size() ==m){
        for(int i=0; i<m; i++)cout<<v[i]<<' ';
        cout<<'\n';
        return;
    }

    for(int i = 0; i<n; i++) {
        //if(c[a[i]]) continue;
        v.push_back(a[i]);
        c[a[i]] = 1;
        go();
        c[a[i]] = 0;
        v.pop_back();
    }
}

int main()
{
    cin>>n>>m;
    for(int i = 0; i<n; i++) cin>>a[i];
    sort(begin(a), begin(a)+n);
    go();
    return 0;
}
