#include <iostream>

using namespace std;

int n,a;
int ans,sum;

int main()
{
    cin>>n;
    for(int i = 0; i<n; i++) {
        scanf("%d",&a);
        
        if(a/10 == 6) a += 30;
        if(a%10 == 6) a += 3;
        if(a%10 == 0)  a+= 9;
        if( a>100) a = 100;

     //   cout<<a<<" ";

        sum += a;

    }
    //cout<<"----------"<<'\n';
    ans = sum*10/n;
    if(ans%10 >=5) ans = ans/10+1;
    else ans = ans/10;

    cout<<ans<<'\n';
    return 0;
}
