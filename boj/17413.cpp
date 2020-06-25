#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

#ifdef DBG
    cout<<str.size()<<endl;
#endif


    bool start = false;
    bool word = false;

    stack<char> stk;

    for(size_t i = 0; i<str.size(); i++){
        
        if(str[i] == '<' && start == false){
            cout<<str[i];
            start = true;
            continue;
        }

        if(start){
            cout<<str[i];
            if(str[i] == '>') start = false;
        }

        if(!start){


            if(stk.empty() && str[i] == ' '){
                stk.push(str[i]);
            }else if(str[i] != ' '){
                stk.push(str[i]);
            }else if(stk.empty() == false && str[i] == ' '){
                while(!stk.empty()){
                    cout<<stk.top(); stk.pop();
                }
                cout<<' ';
            }else{

                cout<<"NOT HERE"<<endl;
            }


        }
    }
    while(!stk.empty()){
        cout<<stk.top();stk.pop();
    }
    cout<<'\n';

    return 0;
}
