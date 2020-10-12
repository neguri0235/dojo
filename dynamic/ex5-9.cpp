// 연습 문제 5-9
// 최장 단조 증가 부분 수열 찾기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#if 0

int find_position(vector<int>&, int);

int main()
{
    vector<int>v = {7,1,5,4,2,4,9};
    vector<int>a;

    a.push_back(v[0]);

    for(auto e : v){
        int p = find_position(a,e);
        if (p >= a.size()) {
            a.push_back(e);
        }else{
            a[p] = e;
        }
    }
    for(auto e : a) {
        cout<<e<<' ';
    }cout<<endl;
    return 0;
}

int find_position(vector<int>& a, int e)
{
    auto r = lower_bound(a.begin(), a.end(), e);
    return r - a.begin();
}

#endif

// find position
auto fp(int e, vector<int>&r)
{
    auto k = lower_bound(r.begin(), r.end(),e);
    if( k == r.end()){
        r.push_back(e);
    }else{
        r[k - r.begin()] = e;
    }
}

int main()
{
    vector<int>input = {7,1,5,4,2,4,9};

    vector<int>res;
    res.push_back(*input.begin());

    for(auto e : input){
        fp(e,res);
    }
    for(auto e : res) cout<<e<<' ';
    cout<<endl;
    return 0;
}