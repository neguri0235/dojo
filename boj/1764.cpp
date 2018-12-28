#include <iostream>
#include <set>

using namespace std;

int n,m;
set<string> s;
set<string> r;
string str;
int main()
{

    ios::sync_with_stdio(false);
    cin>>n>>m;

    for(int i = 0; i<n; i++){
        cin>>str;
        s.insert(str);
    }

    for(int i = 0; i<m; i++) {
        cin>>str;
        auto a = s.insert(str);
        if(a.second == false) {
            r.insert(str);
        }
    }

    cout<<r.size()<<endl;
    for(auto& a : r) 
        cout<<a<<endl;


    return 0;
}


