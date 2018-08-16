#include <iostream>

using namespace std;

int n,v,p,m;
int a[501];
int b[501];
int d[501];

int main()
{

    // input
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>p>>v;
        b[p] = v;
        d[i] = 1;
    }

    // sort
    int j = 0;
    for(int i = 1; i<=500; i++){
        if(b[i] != 0){
            a[j] = b[i];j++;
        }
    }

    //do LIS

    for(int i = 1; i<=n; i++){

        for(int j = 0; j<i; j++){

            if(a[i] > a[j] && (d[j]+1 > d[i])) {

                d[i] = d[j]+1;
                if(d[i] > m) m = d[i];

            }

        }

    }
    cout<<(n-m)<<endl;
    return 0;
}
