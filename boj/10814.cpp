#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int N,n;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
#ifdef DBG
    freopen("10814.txt","r",stdin);
#endif

    cin>>N;
    vector<tuple<int,string,int>>v;

    for(int i = 0; i<N; i++){
        cin>>n>>s;
        v.push_back(make_tuple(n,s,i));
    }
    sort(v.begin(),v.end(),[](
                tuple<int,string,int>a,
                tuple<int,string,int>b)
            {
            if (get<0>(a) < get<0>(b)) return true;
            else if(get<0>(a) == get<0>(b)){
            return get<2>(a) < get<2>(b);
            }else{
            return false;
                }
            
            });

    for(auto e : v) {

        cout<<get<0>(e)<<' '<<get<1>(e)<<'\n';
    }
    return 0;
}
