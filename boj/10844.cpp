#include <iostream>

long long d[101][10];


long long solve(int n)
{
    long long r = 0;
    
    for(int j = 1; j<=9; j++){
        d[1][j] = 1;
    }

    for(int i = 2; i<=n; i++){
        for(int j = 0; j<=9; j++){
            d[i][j] = 0;

           if(j-1 >= 0) d[i][j] += d[i-1][j-1];
           if(j+1 <= 9) d[i][j] += d[i-1][j+1];
           d[i][j] %=1000000000;

        }
    }

    for(int i = 0; i<=9; i++)
        r += d[n][i];

    r%=1000000000;

    return r;
}

int main()
{

    int n;
    std::cin>>n;
    std::cout<<solve(n)<<std::endl;
    return 0;
}
