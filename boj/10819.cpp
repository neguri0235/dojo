#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>


#define DBG 0

std::vector<int> v;
int sol = -999 ;

void solve();
void calc();
void input();

int main()
{

    input(); 
    //calc();
    solve();

    return 0;
}

void input()
{
    int n,a;

#if DBG
    freopen("input.txt","r",stdin);
#endif
    scanf("%d",&n);
    for(int i = 0; i<n; ++i){
        scanf("%d",&a);
        v.push_back(a);
    }

    std::sort(v.begin(),v.end());

#if DBG
        for(auto& a : v) {
            std::cout<<a<<" ";
        }
        std::cout<<std::endl;
#endif
}


void solve()
{
    do {
        calc();
    }while(std::next_permutation(v.begin(), v.end()));
    std::cout<<sol<<std::endl;
}


void calc()
{
    int sum = 0;
    for(int i = 1; i<v.size(); ++i)
    {
        sum += abs((v.at(i-1) - v.at(i)));
    }
    sol = std::max(sum,sol);
}


