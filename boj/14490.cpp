#include <iostream>

using namespace std;


int gcd(int a, int b)
{
    if(a < b) {
        int t = a;
        a = b; b = t;
    }

    int n = 0;
    while(b != 0) {

        n = a%b;
        a = b;
        b = n;

    }

    return a;
}

int main()
{
    string s;
    int a = 0, b = 0, next = 0;
    cin>>s;

    for(int i = 0; i<s.size(); i++) {

        if(s[i] == ':') {
            next = 1;
            continue;
        }

        if(next == 0) {
            a = a*10;
            a += s[i] -'0';
        }else{
            b = b*10;
            b += s[i] - '0';
        }
    }

    int k = gcd(a,b);

    cout<<a/k<<':'<<b/k<<endl;

    return 0;
}
