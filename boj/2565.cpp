#include <iostream>

using namespace std;

int in[501];
int a[501];
int d[501];

int n,p,v,m,index;

int main()
{
    // in
    cin>>n;
    for(int i = 0; i<n; i++) {
        d[i] = 1;
        cin>>p>>v;
        in[p] = v;
    }

    // sort 
    for(int i = 1; i<501; i++){
        if(in[i]){
            a[index]=in[i];
            index++;
        }
    }

    // LIS

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
