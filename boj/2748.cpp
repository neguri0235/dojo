#include <iostream>

using namespace std;

long long a[100];
int n;

int main()
{

    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i<100; i++) {
        a[i] = a[i-1] +a[i-2];
    }
    cin>>n;

    cout<<a[n]<<'\n';

    return 0;
}
