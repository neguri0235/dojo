#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> v;
string s;

int main()
{
    for(int i = 1; i<=5; i++) {

        cin>>s;
        for(int j = 2; j<s.size(); j++) {
            
            if(s[j-2] == 'F' && s[j-1] == 'B' && s[j] == 'I') {
                v.push_back(i);
                break;
            }
        }

    }

    if(v.size() == 0) cout<<"HE GOT AWAY!";

    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<' ';
    }
    cout<<'\n';

    return 0;
}
