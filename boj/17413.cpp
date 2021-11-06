#include <iostream>
#include <string>
#include <stack>

using namespace std;


void stack_flush(stack<char>&);

int main()
{
    ios_base::sync_with_stdio(false);
    stack<char> stk;
    string str;
    getline(cin, str);
    #ifdef CB_
    cout<<"input: "<<str<<' '<<str.size()<<endl;
    #endif
    size_t n = str.size();
    size_t npos = 0;
    bool open = false;
    while(n--) {
        char c = str[npos];
        if(c == '>'){
            open = false;
            cout<<c;
        }else if(c == '<' || open == true){
            stack_flush(stk);
            cout<<c;
            open = true;
        }else if(c == ' '){
            stack_flush(stk);
            cout<<' ';
        }else{
            stk.push(c);
        }
        npos += 1;
    }
    //if(!stk.empty())cout<<' ';
    stack_flush(stk);
    return 0;
}

void stack_flush(stack<char>& stk)
{
    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }
}