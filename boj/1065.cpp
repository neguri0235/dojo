#include <iostream>

using namespace std;

int n,ans;
int a1,a2,a3;

int main()
{
    cin>>n;

    if(n <100)
    {
        ans = n;
    }else{
        ans += 99;
        for(int i = 100; i<=n; i++) {
            a1 = i/100;
            a2 = i/10%10;
            a3 = i%100%10;

            //cout<<i<<": "<< a1<<" "<<a2<<" "<<a3<<'\n';
            
            if((a1>= a2&& a2>= a3) && (abs(a1-a2) == abs(a2-a3))){
                ans++;
               // cout<<"add "<<i<<'\n';
            }else if((a1<= a2&& a2<= a3) && (abs(a1-a2) == abs(a2-a3))){
                ans++;
               // cout<<"add "<<i<<'\n';
            }
        }
    }

    cout<<ans<<'\n';

    return 0;
}
