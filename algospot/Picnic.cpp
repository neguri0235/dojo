#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int tc,n,m,p,q;

int main()
{
    cin>>tc;
    while(tc--){
        cin>>n>>m;
        vector<pair<int,int>> a;
        for(int i = 0; i<m; i++){
            cin>>p>>q;
            a.push_back(make_pair(p,q));
        }
    }
}