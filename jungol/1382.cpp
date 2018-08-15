#include <iostream>

using namespace std;

int d[101][10001];
int n, k;

int a[101];
int an[101];

int main()
{

    cin>>k;
    cin>>n;

    for(int i = 1; i<=n; i++){
        cin>>a[i]>>an[i];
    }


    for(int i = 1; i<=k; i++){
        d[i][0] = 1;
    }

    d[0][0] = 1;

    for(int i = 1; i<=n; i++) {

        for(int j = 1; j<=k; j++){

            for(int l = 0; l <= an[i]; l++){

                if(a[i]*l > j) break;
                d[i][j] += d[i-1][j-a[i]*l];
            }

        }


    }

    std::cout<<d[n][k]<<std::endl;

    return 0;
}
