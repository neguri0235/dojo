#include <iostream>
#include <cstdio>

int a[11];
int d[64001];

int n,k;

int main()
{
    std::cin>>n;

    for(int i = 0; i<n; i++){
        std::cin>>a[i];
    }

    std::cin>>k;

    for(int i = 1; i<=k; i++){
        d[i] = 987654321;
    }



    for(int i = 0; i<n; i++){

        for(int j = a[i]; j<=k; j++){
            d[j] = std::min(d[j], d[j - a[i]] +1);
        }
    }

    if(d[k] == 987654321) std::cout<<"impossible"<<std::endl;
    else std::cout<<d[k]<<std::endl;

    return 0;
}
