#include <iostream>

using namespace std;

int n,_max;
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

    for(int i = 1; i<n; i++){

        for(int j = 0; j<=i; j++){

            if(a[i] > a[j]  && d[j] + 1 > d[i]) {
                d[i] = d[j]+1;

                if(d[i] > _max) _max = d[i];
            }

        }

    }

    //cout<<"max: "<<_max<<endl;
    //for(int i = 0; i<n; i++) {
    //    cout<<d[i]<<" ";
    //}cout<<endl;


    cout<<n -_max<<endl;

    return 0;
}
