#include <iostream>
#include <cstdio>

int n;
int a[1001];
int d[1001];

int max;

int main()
{
    std::cin>>n;

    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
        d[i] = 1;
    }

    max = 1;

    for(int i = 1; i<n; i++){
        for(int j = 0; j<i; j++){

            if(a[i] > a[j] && d[j]+1 > d[i]) {
                d[i] = d[j]+1;
                if(max < d[i]) max = d[i];
            }
        }
    }

    std::cout<<max<<std::endl;

    return 0;
}
