#include <iostream>

/*
2
10000
2
1 2000
3 400
50000
0
*/

using namespace std;

int tc,price, n,nu,p;

int main()
{
    cin>>tc;
    while(tc--){

        cin>>price;
        cin>>n;
        for(int i = 0; i<n; i++) {
            cin>>nu>>p;
            price += nu*p;
        }

        cout<<price<<'\n';
        price = 0;
    }
    return 0;
}

