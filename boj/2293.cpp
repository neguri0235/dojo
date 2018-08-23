#include <iostream>

using namespace std;

int n,k;

int a[102];
int d[10002];

int main()
{
    cin>>n>>k;
    for(int i = 0; i<n; i++) cin>>a[i];

    d[0]  = 1;

    for(int i = 0; i<n; i++) {

        for(int j = a[i]; j<=k; j++) {

            d[j] += d[j-a[i]];

        }

    }
    

    cout<<d[k]<<endl;

    return 0;
}
