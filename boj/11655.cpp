#include <iostream>
#include <string>

using namespace std;

string s;
string ans;

int main()
{

    getline(cin,s);
    ans = s;

    for(int i = 0; i<s.size(); i++) {

        if(s[i] >= 'a' && s[i] <= 'z') {

            if(s[i] + 13 > 'z') {
                ans[i] = s[i] - 13;
            }else{
                ans[i] = s[i]+13;
            }
        }else if(s[i] >='A' && s[i] <= 'Z' ){
            if(s[i] + 13 > 'Z') {
                ans[i] = s[i] - 13;
            }else{
                ans[i] = s[i]+13;
            }
    
        }else{
            ans[i] = s[i];
        }

    }

   cout<<ans<<'\n';
   return 0;
}

