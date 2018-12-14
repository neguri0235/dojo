#include <iostream>
#include <algorithm>

using namespace std;

int a[3];
string s;

int main()
{
    
    for(int i = 0; i<3; i++) {
        cin>>a[i];
    }
    cin>>s;
    sort(begin(a),begin(a)+3);
    for(int i = 0; i<3; i++){
        if(s[i] =='A') cout<<a[0]<<' ';
        if(s[i] =='B') cout<<a[1]<<' ';
        if(s[i] =='C') cout<<a[2]<<' ';
    }
    cout<<'\n';
    return 0;
}
