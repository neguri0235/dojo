#include <iostream>
#include <vector>

using namespace std;

int go(vector<vector<int>>& v, vector<bool>& domi, vector<bool>& visit, int curr)
{

    int ret = 0; 
    visit[curr] = true;

    if(v[curr].empty() == false) {

        bool needDomi = false;

        for(auto next : v[curr]) {

            if(visit[next]) continue;

            ret += go(v,domi,visit,next);

            if(domi[next] == false) needDomi = true;

        }

        if(needDomi) {
            domi[curr] = true;
            ret++;
        }
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int N;
    cin>>N;

    vector<vector<int>> graph(N+1,vector<int>());

    for(int i = 0; i<N-1; i++) {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> domi(N,false);
    vector<bool> visit(N,false);

    int ans = go(graph, domi, visit, 1);

    cout<<ans<<'\n';

    return 0;
}
