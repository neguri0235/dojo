#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;


int n,sz;
vector<string> v;
string ans,s;

int main()
{
    std::ios::sync_with_stdio(false);
    sz = 51;

    cin>>n;

    for(int i = 0; i<n; i++) {
        cin>>s;
        v.push_back(s);
        sz = sz < s.size() ? sz:s.size();
    }



    for(int i = 0; i<sz; i++) {

        ans.push_back(v[0][i]);

        for(int j = 0; j<n; j++) {

            if(v[0][i] == v[j][i]) continue;
            else{
                ans[i] = '?';
                break;
            }
        }
    }

    cout<<ans<<'\n';

    return 0;
}
