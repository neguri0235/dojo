#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define INF 100000


int main()
{
    ios_base::sync_with_stdio(false);
    int n, k;
    cin>>n>>k;
    queue<int>q;
    q.push(n);
    vector<int>d(100002,INF);
    d[n] = 0;
    while(!q.empty()){
        auto a = q.front(); q.pop();

        if(a == k) break;

        if(a*2 <= 100000 && (d[a*2] == INF || d[a*2] > d[a])) {
            d[a*2] = d[a];
            q.push(a*2);
        }

        if( a + 1 <= 100000 && (d[a+1] == INF || d[a+1] > d[a]+1)){
            d[a+1] = d[a] + 1;
            q.push(a+1);
        }

        if( a - 1 >= 0 && (d[a-1] == INF || d[a-1] > d[a] + 1)) {
            d[a-1] = d[a] + 1;
            q.push(a-1);
        }
    }
    cout<<d[k]<<'\n';
    #ifdef CB
    for(int i = 1; i<20; i++){
        cout<<i<<':'<<d[i]<<endl;
    }
    cout<<endl;
    #endif

    return 0;
}