#include <iostream>
#include <cstdio>

long long d[100001];
long long m; 

long long max(long long a, long long b) {
    if(a > b) return a;
    else return b;
}


int main()
{
    int n;
    long long a;
    std::cin>>n;
    scanf("%lld",&a);

    d[0] = a;
    m =  a;

    for(int i = 1; i<n; i++){
        scanf("%lld",&a);

        d[i] = max(a, d[i-1]+a);

        if(d[i] > m) m = d[i];
    }

    std::cout<<m<<std::endl;

    return 0;
}





#if 0

#include <iostream>

int d[1000001];

int main()
{
    int n,a;

    std::cin>>n;
    std::cin>>a;

    int cur_max = a;
    int far_max = a;

    for(int i = 1; i<n; i++){
        std::cin>>a;
        cur_max = cur_max + a > a ? cur_max+ a : a;
        far_max = far_max > cur_max ? far_max  : cur_max;
    }
    
    std::cout<<far_max<<std::endl;

    return 0;
}
#endif
