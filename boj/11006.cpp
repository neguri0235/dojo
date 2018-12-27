#include <iostream>

using namespace std;


int tc,n,m,u,t;

int main()
{
    cin>>tc;

    while(tc--) {

        cin>>n>>m;

        u  = m*2 - n;
        t  = m - u;

        cout<<u<<' '<<t<<endl;
    }
    return 0;
}
