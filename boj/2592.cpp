#include <iostream>

using namespace std;

int sum,a,fre,ans,n;
int d[101];
int main()
{
    n = 10;
    for(int i = 0; i<n; i++) {
        cin>>a;
        sum +=a;
        d[a/10] +=1;

    }

    for(int i = 0; i<101; i++) {
        if(d[i] > fre) {
            ans = i*10;
            fre = d[i];
        }
    }
    sum = sum/10;

    cout<<sum<<'\n';
    cout<<ans<<'\n';
    return 0;
}
