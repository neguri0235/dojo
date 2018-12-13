#include <iostream>

using namespace std;

int a[101],t,n,ans;

void build()
{

    for(int i = 0; i<=100; i++) {
        a[i] = 0;
    }

    for(int i = 2; i<=n; i++) {

        for(int j = i; j<=n; j+=i){
            if(a[j] == 0) a[j] = 1;
            else a[j] = 0;
        }
    }
}

void calc()
{
    ans = 0;
    for(int i = 1; i<=n; i++) {
        if(a[i] == 0) ans++;

    }

}


int main()
{
    cin>>t;


    while(t--){
        cin>>n;
        build();
        calc();
        cout<<ans<<'\n';
    }
    return 0;
}
