#include <iostream>

using namespace std;


int a[31];
int kn[8];
int d[31][40001];
int n;
int k;
int sum;


int abs(int a) {
    if( a > 0) return a;
    else return  a*-1;
}

int main()
{

    // input data
    std::cin>>n;
    for(int i = 1; i<=n; i++){
        std::cin>>a[i];
        sum+=a[i];
    }


    // input target data
    std::cin>>k;

    for(int i =1; i<=k; i++){
        std::cin>>kn[i];
    }


    //calc


    for(int i = 1; i<=n; i++){

        d[i][a[i]] = 1;

        for(int j = 1; j<=sum; j++){

            if(d[i-1][j])
            d[i][j] = d[i-1][j];

            if(d[i-1][j] == 1){

                d[i][abs(j-a[i])] = 1;
                d[i][j+a[i]] = 1;
                //d[i][abs(a[i]-d[i-1][j])]=1; 
            }
        }
#if 0
        for(int x = 1; x<=sum; x++){
            cout<<d[i][x]<<" ";
        }cout<<endl;
#endif
    }


    for(int i = 1; i<=k; i++){
        if(d[n][kn[i]] == 1) cout<<'Y'<<" ";
        else cout<<'N'<<" ";
    }
    cout<<endl;


    return 0;
}
