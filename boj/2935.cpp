#include <iostream>
#include <string>


using namespace std;


string s1,s2,op,ans;
int main()
{
    cin>>s1;
    cin>>op;
    cin>>s2;

    if(s1.size() == s2.size() && op.compare("+") == 0) {

        s1[0] = '2';
        ans = s1;
    }else{
        if(op.compare("*") ==0){
            ans = s1;
            for(int i = 1; i<s2.size(); i++) {
                ans.push_back('0');
            }
        }else{
            if(s1.size() > s2.size()) {
                ans = s1;
                int sz = s2.size();
                ans[s1.size() - sz] = '1';
            }else{
                ans = s2;
                int sz = s1.size();
                ans[s2.size() - sz] = '1';
            }
        }
    }

    cout<<ans<<'\n';
    return 0;
}
