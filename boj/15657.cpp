#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m,a[10];
int c[10001];
vector<int> v;


void go()
{
    if(v.size() == m) {


        for(int i = 1; i<m; i++) {
            if(v[i] < v[i-1]) return;
        }



        for(int i = 0; i<m; i++) cout<<v[i]<<' ';
        cout<<'\n';
        return;
    }

    for(int i = 0; i<n; i++) {

        c[a[i]] = 1;
        v.push_back(a[i]);
        go();
        c[a[i]] = 0;
        v.pop_back();
    }
}

int main()
{
    cin>>n>>m;

    for(int i = 0; i<n; i++) cin>>a[i];
    sort(begin(a),begin(a)+n);

    go();
    return 0;
}

