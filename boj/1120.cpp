#include <iostream>
#include <string>

using namespace std;

int ans,diff,_min;
string s1,s2;

int main()
{
    cin>>s1>>s2;
    _min = 51;

    if(s1.size() == s2.size()) {
        for(int i = 0; i<s1.size(); i++) {
            if(s1[i] != s2[i]) ans++;
        }
    }else{

        int sz = s2.size() -  s1.size();
        for(int i = 0; i<=sz; i++) {
            for(int j = 0; j<s1.size(); j++) {

                if(s1[j] != s2[j+i]) diff++;
            }
            _min = min(diff,_min);
            diff = 0;
        }
        ans =  _min;
    }
    cout<<ans<<'\n';

    return 0;
}

