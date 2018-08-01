#include <iostream>

long d[1000];

int n;

int main()
{

    std::cin>>n;

    d[0] = 1;
    d[1] = 1;


    for(int i = 2; i<=n ; i++){
        d[i] =( d[i-1] + d[i-2])%10007;
    }


    std::cout<<d[n]<<std::endl;

    return 0;
}
