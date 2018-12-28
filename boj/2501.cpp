#include <iostream>

using namespace std;

int n,m,idx;
int a[10001];

int main()
{
    cin>>n>>m;

    a[1] = 1;
    idx = 2;

    for(int i = 2; i<=n; i++) {
        if(n%i ==0) a[idx++] = i; 
    }

    cout<<a[m]<<endl;


    return 0;
}
