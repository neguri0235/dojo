#include <iostream>

using namespace std;

int a,ans;
int d[42];

int main()
{
    for(int i = 0; i<10; i++) {
        cin>>a;
        d[a%42] = 1;
    }

    for(int i = 0; i<42; i++){
        if(d[i]) ans++;
    }

    cout<<ans<<'\n';

    return 0;
}
