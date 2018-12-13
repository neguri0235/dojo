#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int x,y,n;
vector<pair<int,int>>v;

int main()
{
    cin>>n;
    for(int i = 0; i<n; i++) {
        scanf("%d %d",&x,&y);
        v.push_back(std::make_pair(x,y));
    }

    sort(v.begin(), v.end(),[&](pair<int,int> &a, pair<int,int> &b){
            

            if(a.second < b.second) return true;

            else if(a.second == b.second) {

                if(a.first < b.first) return true;
                else 
                return false;
            }
            return false;
            
            });

   // cout<<"------------------"<<endl;

    for(int i = 0; i<n; i++) {
        printf("%d %d\n",v[i].first, v[i].second);
    }


    return 0;
}
