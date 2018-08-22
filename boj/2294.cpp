#include <iostream>
#include <cstdio>

using namespace std;

int n,k;

int a[102];
long long d[100002];

int main()
{

    cin>>n>>k;

    for(int i = 0; i<n; i++) cin>>a[i];

    for(int i = 1; i<=k; i++) d[i] = 987654321;

    for(int i = 0; i<n; i++){

        for(int j = a[i]; j<=k; j++){
            d[j] = std::min(d[j], d[j-a[i]] + 1);
        }
    }

    if(d[k] == 987654321) cout<<"impossible"<<endl;
    else cout<<d[k]<<endl;

    return 0;
}
