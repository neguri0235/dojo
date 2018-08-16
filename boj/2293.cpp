#include <iostream>
#include <cstdio>

int a[101];
int d[10001];
int n,k;

int main()
{

    std::cin>>n>>k;

    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }

    d[0] = 1;

    for(int i = 0; i<n; i++){

        for(int j = a[i]; j<=k; j++) {
            d[j] = d[j] + d[j - a[i]];
        }
    }

    std::cout<<d[k]<<std::endl;

    return 0;
}
