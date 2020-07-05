#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    vector<string> v;

    cin>>str;
    size_t sz = str.size();

    for(size_t i = 0; i<sz; i++){
	v.push_back(str.substr(i,sz));
    }

    sort(begin(v), end(v));
    for(auto e: v) {cout<<e<<'\n';}

    return 0;
}
