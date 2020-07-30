#include <iostream>
#include <stack>

using namespace std;

int ans;

int main()
{
    string str;

    cin>>str;
    stack<char>stk;

    for(size_t i = 0; i<str.size(); i++){

        if(str[i] =='('){
            stk.push('(');
        }else{

            stk.pop();
            if(str[i-1] == ')') ans +=1;
            else ans += stk.size();
        }
    }
    cout<<ans<<'\n';
    return 0;
}