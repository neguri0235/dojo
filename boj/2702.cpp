#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    else{
        return gcd(b, a%b);
    }
}

int main()
{
    int t, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int k = gcd(a,b);
        int j = a*b/k;
        cout<<j<<' '<<k<<endl;
    }
    return 0;
}