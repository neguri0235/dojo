#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int n;



pair<int, int> calc(vector<int>&a, int index, int curr, int plus, int minus, int mul, int div)
{

    int n = a.size();

    if(index == n) {
        return make_pair(curr, curr);

    }

    vector<pair<int,int>> res;

    if(plus > 0) {
        res.push_back(calc(a, index+1, curr+a[index], plus -1, minus, mul, div));
    }

    if(minus > 0){
        res.push_back(calc(a, index+1, curr-a[index], plus, minus-1, mul, div));
    }

    if(mul > 0){
        res.push_back(calc(a, index+1, curr*a[index], plus, minus, mul-1, div));
    }

    if(div > 0){
        res.push_back(calc(a, index+1, curr/a[index], plus, minus, mul, div-1));
    }

    auto p = res[0];

    for(auto e : res){
        if(e.first > p.first) {
            p.first = e.first;
        }

        if(e.second < p.second) {
            p.second = e.second;
        }
    }

    return p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int plus, minus, mul, div;

    cin>>plus>>minus>>mul>>div;

    auto res = calc(a,1,a[0], plus, minus, mul, div);
    cout<<res.first<<endl;
    cout<<res.second<<endl;

    return 0;
}