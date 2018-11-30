#include <iostream>

using namespace std;

int a[26];
int ans;


string s1,s2;

int main()
{

    cin>>s1>>s2;

    for(int i = 0; i<s1.size(); i++) {
        a[s1[i]-'a']++;
    }

    for(int i = 0; i<s2.size(); i++){
        if(a[s2[i]-'a']) a[s2[i]-'a']--;
        else{
            ans++;
        }
    }

    for(int i = 0; i<26; i++){
        ans += a[i];
    }

    cout<<ans<<'\n';

    return 0;
}
