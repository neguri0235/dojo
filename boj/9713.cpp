#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,sum = 0;
    cin>>n;
    while(n--){
        cin>>a;
        sum = 0;
        for(int i = 1; i<=a; i++){
            if(i%2) sum +=i;
        }
        cout<<sum<<'\n';
    }
    return 0;
}