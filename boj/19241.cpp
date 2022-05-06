#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n;
        vector<pair<int,int>>p;
        for(int i = 0; i<n; i++){
            cin>>a>>b;
            p.push_back(make_pair(a,b));
        }
        sort(begin(p),end(p),[](pair<int,int>x, pair<int,int>y){
            if (x.second > y.second){
                return 1;
            }else if(x.second< y.second){
                return 0;
            }else{
                if(x.first > y.first){
                    return 1;
                }else{
                    return 0;
                }
            }
        }
        );

#ifdef CB
        for(auto e: p) {
            cout<<e.first<<' '<<e.second<<endl;
        }
#endif

        int sa = 0;
        int sb = 0;
        for(int i = 0; i<n; i++){
            if (i%2 == 0){
                sa += p[i].first;
            }else{
                sb += p[i].second;
            }
        }
        cout<<sa-sb<<endl;

    }
    return 0;
}