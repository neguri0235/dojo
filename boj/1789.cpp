#include <iostream>

using namespace std;

int main()
{
    long long int n,ans = 0,sum = 0;
    int add = 1;

    cin>>n;
    while(true){

        if(n == sum){
            break;
        }

        if(n < sum){
            ans -=1;
            break;
        }

        sum += add;
        add +=1;
        ans +=1;

    }
    
    cout<<ans<<'\n';
    return 0;
}
