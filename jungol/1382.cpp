#include <iostream>

using namespace std;

unsigned int d[10001][10001];
int t, k;

int a[101];
int an[101];

int main()
{

    cin>>t;
    cin>>k;

    for(int i = 1; i<=k; i++){
        cin>>a[i]>>an[i];
    }


    for(int i = 1; i<=t; i++){
        d[i][0] = 1;
    }

    d[0][0] = 1;

    for(int i = 1; i<=k; i++) {

        for(int j = 1; j<=t; j++){

            for(int l = 0; l <= an[i]; l++){

                if(a[i]*l > j) break;
                d[i][j] += d[i-1][j-a[i]*l];
            }

        }


    }

    std::cout<<d[k][t]<<std::endl;

    return 0;
}
