#include <iostream>
#include <string>

using namespace std;

string rev(string s)
{
    string str ;

    for(int i = 0; i<s.size(); i++){
        str.push_back(s[s.size() - i - 1]);
    }

    return str;
}


int main()
{
    string a1,a2,ans;
    int    i1,i2,i3;
    cin>>a1>>a2;
    a1 = rev(a1);
    a2 = rev(a2);
    i1 = stoi(a1);
    i2 = stoi(a2);
    i3 = i1 + i2;

    if(i3%10 == 0) i3 = i3/10;
    ans = to_string(i3);
    ans = rev(ans);
    cout<<ans<<endl;

    return 0;
}
