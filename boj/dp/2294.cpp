#include <iostream>
#include <cstdio>

int n,k;

int a[101];
int d[10001];

int main()
{
    std::cin>>n>>k;

    for(int i = 1; i<=n; i++){
        scanf("%d",&a[i]);
    }



    for(int i = 0; i<=k; i++) {
        d[i] = 100001;
    }

    d[0] = 0;

    for(int i = 1; i<=n; i++){

        for(int j = a[i]; j<=k; j++){

            d[j] = std::min(d[j], d[j-a[i]]+1);
        }
    }

    if(d[k] ==100001){
        std::cout<<-1<<std::endl;
    } else{
        std::cout<<d[k]<<std::endl;
    }

    return 0;
}
