#include <iostream>

using namespace std;

int a[26],tc,empty;
string s;

int main()
{
    cin>>tc;
    while(tc--) {
        cin>>s;
        a[s[0]-'a']++;
    }

    for(int i = 0; i<26; i++) {
        if(a[i] >=5){
            cout<<static_cast<char>(i+'a');
            empty = 1;
        }
    }
    if(empty == 0) cout<<"PREDAJA"<<'\n';
    return 0;
}
