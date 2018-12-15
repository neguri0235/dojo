#include <iostream>

using namespace std;

int a[] = {1,1,2,2,2,8};
int k,n;

int main()
{

    n = 6;
    for(int i = 0; i<n; i++) {
        cin>>k;
        cout<<a[i] - k<<' ';
    }

    cout<<'\n';
    return 0;
}
