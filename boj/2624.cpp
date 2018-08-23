#include <iostream>

using namespace std;

int k;
int n;
int a[102];
int an[102];
int d[10002];


int main()
{
    cin>>k;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>a[i]>>an[i];
    }

    d[0] = 1;

    for(int i = 1; i<=n; i++){

        for(int j = k; j >= 1; j--){

            for(int l = 1; l <= an[i]; l++){
                if( j - l*a[i] >=0)
                    d[j] += d[j - l*a[i]];
            }

        }
    }

    cout<<d[k]<<endl;

    return 0;
}
