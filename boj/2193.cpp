#include <iostream>

long long d[100];

auto solve(int n)
{
    d[0] = 0;
    d[1] = 1;
    d[2] = 1;


    for(int i = 3; i<=n ; i++){
        d[i] = d[i-1] + d[i-2];
    }

    return d[n];
}

int main()
{
    int n;
    std::cin>>n;
    std::cout<<solve(n)<<std::endl;
    return 0;
}
