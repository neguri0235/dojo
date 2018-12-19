#include <iostream>
#include <string>

using namespace std;

int tc,n;
string s;

int main()
{
    cin>>tc;
    while(tc--) {
        cin>>n;
        cin>>s;
        s.erase(s.begin()+n-1);
        cout<<s<<'\n';
        s.clear();
    }
    return 0;
}
