#include <iostream>

using namespace std;

string s;

int main()
{
    cin>>s;

    for(int i = 0; i<s.size(); i++) {

        if(s[i] >='D' && s[i] <='Z') {
            s[i] = s[i]-3;
        }else{
            s[i] = s[i] + 26 - 3;
        }
    }

    cout<<s<<'\n';
    return 0;
}
