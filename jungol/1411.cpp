#include <iostream>

int d[100001];

int main()
{
    int n;
    std::cin>>n;

    d[0] = 1;
    d[1] = 1;


    for(int i = 2; i<=n ; i++){
        d[i] = (d[i-1]+d[i-2]+d[i-2])%20100529;
    }

    std::cout<<d[n]<<std::endl;

    return 0;
}
