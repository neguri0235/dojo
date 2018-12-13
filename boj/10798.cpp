#include <iostream>
#include <string>
#include <vector>

using namespace std;


vector<string> v;
vector<char> ans;

string s;
unsigned int max_len,sz;


int main()
{
    for(int i = 0; i<5; i++) {
        cin>>s;
        v.push_back(s);
        if(max_len < s.size()) max_len = s.size();
    }

    for(unsigned int z = 0;  z<max_len; z++) {

        for(int i = 0; i<5; i++) {
            sz = v[i].size();
            s = v[i];
            if(z < sz)
            ans.push_back(s[z]);
        }
    }

    for(unsigned int i = 0; i<ans.size(); i++) {
        cout<<ans[i];
    }
    cout<<'\n';

    return 0;
}
