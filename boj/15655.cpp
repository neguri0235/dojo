#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>v;
int n,m;
int a[10001];
int c[10001];


void go()
{
    if(v.size() == m) {

        for(int i = 1; i<m; i++) {
            if(v[i-1] >= v[i]) return;
        }

        for(int i = 0; i<m; i++) {
            cout<<v[i]<<' ';
        }
        cout<<'\n';
        return;
    }

    for(int i = 0; i<n; i++) {
        if(c[a[i]]) continue;

        v.push_back(a[i]);
        c[a[i]] = 1;
        go();
        v.pop_back();
        c[a[i]] = 0;
    }
}

int main()
{
    cin>>n>>m;
    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }
    sort(begin(a),begin(a)+n);

    go();

    return 0;
}
