#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int a,b,n;
vector<pair<int,int>>v;

int main()
{
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(),v.end(), [&](pair<int,int> a, pair<int,int>b){
            if(a.first > b.first) {
              return false;
            }else if(a.first == b.first){
              if(a.second > b.second) {
                return false;
              }else{
                return true;
              }
            }else{
              return true;
            }
            });

    cout<<"--------------"<<endl;
    for(int i = 0; i<n; i++) {
        printf("%d %d\n",v[i].first, v[i].second);
    }

    return 0;
}
