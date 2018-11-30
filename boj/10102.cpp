#include <iostream>
#include <string>


using namespace std;

int n,b,a;
string s;

int main()
{
    cin>>n;
    cin>>s;

    for(int i = 0; i<n; i++) {
        if(s[i] == 'A') a++;
        else b++;

    }

    if(a > b) cout<<'A'<<'\n';
    else if(a <b ) cout<<'B'<<'\n';
    else cout<<"Tie"<<'\n';

    return 0;
}
