#include <iostream>
#include <string>

using namespace std;
// 1430
// 4862
// 6282
// 6292

int a1,a2,b1,b2,ans;
string s1,s2;

int main()
{

    cin>>s1>>s2;

    for(int i = 0; i<s1.size(); i++) {
        if(s1[i] == '6') s1[i] = '5';
        a1 *= 10;
        a1 += s1[i] - '0';
    }

    for(int i = 0; i<s2.size(); i++) {
        if(s2[i] == '6') s2[i] = '5';
        a2 *= 10;
        a2 += s2[i] - '0';
    }

    ans = a1+a2;
    cout<<ans<<' ';

    a1 = a2 = 0;

    for(int i = 0; i<s1.size(); i++) {
        if(s1[i] == '5') s1[i] = '6';
        a1 *= 10;
        a1 += s1[i] - '0';
    }

    for(int i = 0; i<s2.size(); i++) {
        if(s2[i] == '5') s2[i] = '6';
        a2 *= 10;
        a2 += s2[i] - '0';
    }

    ans = a1+a2;
    cout<<ans<<' '<<'\n';



    return 0;
}
