#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, from, to, w, ans;

struct edge {
    int to;
    int w;
    edge(int a, int b):to(a),w(b){}
};

vector<edge>A[100001];

bool check(int w){
    vector<int>visit(100001);
    queue<int>q;
    q.push(from);
    while(!q.empty()){
        auto node = q.front(); q.pop();
        if (node == to)
        {
            if(ans < w) ans = w;
            return true;
        }

        for(auto e : A[node]){
            if(e.w <= w && !visit[e.to]){
                q.push(e.to);
                visit[e.to] = 1;
            }
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin>>n>>m;

    for(int i = 0; i<n; i++){
        cin>>from>>to>>w;
        A[from].push_back({to,w});
        A[to].push_back({w,to});
    }

    cin>>from>>to;


    int l = 0;
    int r = 1000000000;
    
    while(l <= r){
        int mid = (l+r)/2;
        if(check(mid)){
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout<<ans<<'\n';
    return 0;
}