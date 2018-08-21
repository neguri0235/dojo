#include <iostream>
#include <string>

using namespace std;

string s;

long long d[5002];
long long mod = 1000000;

int main()
{
    cin>>s;
    int len = s.length();
    s = " "+s;

    d[0] = 1;

    for(int i = 1; i<=len; i++){

        if(s[i] != '0'){
            d[i] = (d[i] + d[i-1])%mod;
        }

        if(i == 1) continue;

        if( (s[i-1] - '0') != 0 ) {
            int a = (s[i-1] -'0') *10;
            a += s[i] -'0';
            if( a >= 10 && a <=26){
                d[i] =(d[i] + d[i-2])%mod;
            }

        }
    }

    cout<<d[len]<<endl;

    return 0;
}
