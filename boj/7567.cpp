#include <iostream>
#include <stack>

using namespace std;

stack<char> s;
string str;
int ans;

int main()
{
    cin>>str;

    ans = 10;
    s.push(str[0]);
    for(int i = 1; i<str.size();i++) {

        char c = s.top();
        if(c == str[i]) {
            ans+=5;
        }else{
            ans+=10;
        }
        s.push(str[i]);
    }
    cout<<ans<<endl;
    return 0;
}
