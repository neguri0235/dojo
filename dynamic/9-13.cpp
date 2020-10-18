#include <iostream>

#define INT_MAX 99

using namespace std;


int minCoins(int *, int , int);

int main()
{
    int Coins [] = {1, 5, 6, 9};
    int S = 11;
    int n = 4;
    cout<<minCoins(Coins, n, S)<<endl;
    return 0;
}

int minCoins(int* coin, int n, int S)
{
    if ( S == 0) return 0;

    int res = INT_MAX;

    for(int i = 0; i<n; i++){
        if(coin[i] <= S) {
            int temp = minCoins(coin, n, S - coin[i]);

            if(temp + 1 < res) {
                res  = temp + 1;
            }
        }
    }

    return res;
}