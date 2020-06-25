#include <iostream>
#include <list>

using namespace std;

int n;
list<char>li;
string s;
char cmd,ch;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin>>s;

    for(size_t i = 0; i<s.size(); i++){
        li.push_back(s[i]);
    }

    cin>>n;

    auto iter = li.end();
    while(n--){

        cin>>cmd;
        if(cmd == 'P'){
            cin>>ch;
            li.insert(iter,ch);
            //iter++;
        }else if(cmd == 'L'){
            if(iter != li.begin()) iter--;
        }else if(cmd == 'B'){
            if((iter--) != li.begin()){
                li.erase(--iter);
            }else{
                iter++;
            }

        }else if(cmd == 'D'){
            if(iter != li.end()) iter++;
        }

    }

    for(auto e : li){
        cout<<e;
    }
    cout<<'\n';

    return 0;
}
