#include <iostream>
#include <list>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   
    string s;
    cin>>s;
    list<char> input;
    for(auto e : s) input.push_back(e);
    int n;
    cin>>n;
    char c;
    auto pos = input.end();
    while(n--){
        //scanf(" %c",&c);
        cin>>c;
        if(c == 'P') {
//            scanf(" %c",&c);
            cin>>c;
            input.insert(pos,c);
        }else if(c == 'L'){
            if(pos != input.begin()) pos--;
        }else if(c == 'B'){
            if(pos != input.begin()) {
                input.erase(prev(pos));
            }
        }else { //D
            if(pos != input.end()) pos++;
        }
#ifdef CB
    for(auto c : input) {
        cout<<c;
    }cout<<'\n';
#endif
    }
    for(auto c : input) {
        cout<<c;
    }cout<<'\n';
    return 0;
}