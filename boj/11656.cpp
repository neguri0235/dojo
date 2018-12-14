#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string s;
vector<string> vs;

int main()
{
    cin>>s;

    for(int i = 0; i<s.size(); i++) {
       vs.push_back(s.substr(i+0,s.size()-i));
    }

    sort(vs.begin(), vs.end());

    for(int i = 0; i<vs.size(); i++) {
        cout<<vs[i]<<'\n';
    }


    return 0;
}
