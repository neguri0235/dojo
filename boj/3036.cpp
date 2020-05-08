#include <iostream>

using namespace std;


int gcd(int a, int b)
{

    while(b!= 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    
    cin>>n;
    cin>>a;
    for(int i = 0; i<n-1; i++){

        cin>>b;
        int r = gcd(a,b);
        cout<<a/r<<'/'<<b/r<<endl;
    }
    return 0;
}
