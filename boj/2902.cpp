#include <iostream>
#include <string>

using namespace std;

string s,ans;

int main()
{
    cin>>s;
    ans = s[0];
    for(int i = 1; i<s.size(); i++) {
        if(s[i-1] == '-' && s[i] != '-')
            ans.push_back(s[i]);
    }
    cout<<ans<<'\n';
    return 0;
}

