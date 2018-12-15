#include <iostream>

using namespace std;

string a1,a2,ans;

int main()
{
    cin>>a1>>a2;

    if(a1.size() >= a2.size()) ans = "go";
    else ans = "no";

    cout<<ans<<'\n';

    return 0;
}
