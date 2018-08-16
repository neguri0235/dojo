#include <iostream>

using namespace std;

int a[201];
int d[201];

int main()
{
    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>a[i];
        d[i] = 1;
    }

    int m = 0;

    for(int i = 1; i<n; i++){

        for(int j = 0; j<i; j++){

            if(a[i] > a[j] && ( d[j] + 1 > d[i] )) {
                d[i] = d[j]+1;
                if(d[i]  > m ) m = d[i];
            }

        }
    }

    cout<<n-m<<endl;

    return 0;
}

