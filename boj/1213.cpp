#include <iostream>
#include <map>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    map<char,int> m;
    for(size_t i = 0; i<s.size(); ++i){
	m[s[i]] += 1;
    }

    deque<char> a;
    deque<char> b;
    vector<char>c;

    for(auto e : m) {
	char ch = e.first;
	int num = e.second;

	if(num == 1) {
	    c.push_back(ch);
	}else if(

    }


    return 0;
}
