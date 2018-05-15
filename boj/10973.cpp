#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int n;
std::vector<int> v;
void solve();

int main()
{
    std::cin>>n;
    int a;

    for(int i=0; i<n; i++) {
        std::cin>>a;
        v.push_back(a);
    }

    solve();

    return 0;
}

void solve()
{

    std::vector<int> cp = v;
    std::sort(std::begin(cp),std::end(cp), [](int a, int b){ if(a<b) return false; else return true;});
    std::prev_permutation(v.begin(), v.end());

    if(cp == v) {
        std::cout<<"-1"<<std::endl;
        return;
    }

    for(auto& a : v){
        std::cout<<a<<" ";
    }
    std::cout<<std::endl;
}
