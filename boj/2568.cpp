#include <iostream>

using namespace std;

int in[101];
int ans[101];
int a[501];
int d[501];
int r[501];

int n,p,v,m,index;

int main()
{
    // in
    cin>>n;
    for(int i = 0; i<n; i++) {
        d[i] = 1;
        cin>>p>>v;
        r[v] = p;
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

    cout<<"DEBUG START"<<endl;

    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
        //if(d[i] < d[i-1] ) cout<<i<<" ";
    }cout<<endl;

    for(int i = 0; i<n; i++){
        cout<<d[i]<<" ";
        //if(d[i] < d[i-1] ) cout<<i<<" ";
    }
    cout<<endl;


    cout<<"DEBUG END"<<endl;


    return 0;
}
