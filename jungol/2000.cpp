#include <iostream>

using namespace std;

int n,k;
int a[12];
long long d[64002];

int main()
{
    cin>>n;
    for(int i = 0; i<n; i++) cin>>a[i];

    cin>>k;
    for(int i = 1; i<=k; i++) d[i] = 987654321;

    for(int i = 0; i<n; i++){

        for(int j = a[i]; j<=k; j++){
            d[j] = std::min(d[j], d[j-a[i]] + 1);
        }
    }

    if(d[k] == 987654321) cout<<"impossible"<<endl;
    else cout<<d[k]<<endl;

    //for(int i = 0; i<=k+2; i++) cout<<d[i]<<" ";
    //cout<<endl;

    return 0;
}
