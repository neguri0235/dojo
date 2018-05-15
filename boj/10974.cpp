#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>


int n;

std::vector<int> v;


void solve();

int main()
{
    std::cin>>n;
    solve();
    return 0;
}


void solve()
{

    for(int i = 1; i<=n ; i++) {
        v.push_back(i);
    }

    do {

        for(auto a : v) {

            printf("%d ",a);
        }

        printf("\n");



    }while(std::next_permutation(v.begin(), v.end()));



}
