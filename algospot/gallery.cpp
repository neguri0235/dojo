#include <iostream>
#include <vector>

using namespace std;


int dfs(vector<vector<int>>& v, vector<bool>& visit, vector<bool>&camera, int curr)
{

    int r = 0;


    bool domi = false;

    if( v[curr].empty() == false) {
        visit[curr] = true;

        for(int i = 0; i< v[curr].size(); i++) {

            int next = v[curr][i];

            if(visit[next]) continue;

            r += dfs(v,visit,camera,next);

            if(camera[next] == false) {
                domi = true;
            }
        }

        if(domi == true) {
            camera[curr] = true;
            cout<<"install "<<curr<<endl;
            r++;
        }
    }
    return r;
}

int go(int n, vector<vector<int>>& v)
{
    int r = 0;

    vector<bool> visit(n,false);
    vector<bool> camera(n,false);

    for(int i = 0; i<n; i++) {
        if(visit[i] == false)
        r += dfs(v,visit,camera,i);
    }

    for(int i = 0; i<n; i++) {
       // cout<<visit[i]<<' ';
        if(visit[i] == false)
            r++;
    }

    return r;
}

int main(int argc, char** argv)
{
    int tc;

    ios_base::sync_with_stdio(false);

    cin>>tc;

    while(tc--) {

        int N, E;
        cin>>N>>E;

        vector<vector<int>>t(N,vector<int>());

        for(int i = 0; i<E; i++) {
            int u,v;
            cin>>u>>v;
            t[u].push_back(v);
            t[v].push_back(u);
        }

       int ans = go(N,t);
       cout<<ans<<'\n';
    }
    
    return 0;
}


#if 0

int tc,node,edge,ans,from,to;

int d[1002][2];
vector<int> v[1002];


int go(int prev, int curr, int visit)
{

    int& r = d[curr][visit];

    if(r != 0 ) return r;

    for(int i=0; i<v[curr].size(); i++) {

        int next = v[curr][i];

        if(next == prev) continue;

        if(visit == 1) {
            r += min(go(curr,next,0), go(curr,next,1)+1);
        }else{

            r += go(curr,next,1)+1;
        }
    }
    return r;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin>>tc;

    while(tc--) {
        cin>>node>>edge;
        for(int i=0; i<edge; i++) {
            cin>>from>>to;
            v[from].push_back(to);
            v[to].push_back(from);
        }

        ans = min(go(-1,0,0), go(-1,0,1)+1);
        cout<<ans<<'\n';
    }


    return 0;
}
#endif
