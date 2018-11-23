#include <iostream>
#include <set>
#include <vector>

using namespace std;

int n,m;
vector<int> v;
set<int> s;
int c[10001];

void go()
{

    if(v.size() == m) {
        for(int i = 0; i<m; i++) {
            cout<<v[i]<<' ';
        }
        cout<<'\n';
        return;
    }

    for(int i = 0; i<n; i++) {
        if(c[s.begin()+0]) continue;
        c[s[i]] = 1;
        v.push_back(s.begin()+i);
        go();
        c[s.begin()+i] = 0;
        v.pop_back();
    }
}

int main()
{
    int a;
    cin>>n>>m;
    for(int i = 0; i<n; i++) {
        cin>>a;
        s.insert(a);
    }

    go();

    return 0;
}
