#include <iostream>
#include <vector>
#include <queue>
#include <utility>


using namespace std;
int n, l, r, mid, ans = 200;

int bfs(vector<vector<int>>&,int,int);
bool go(vector<vector<int>>&,int);

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }

    #ifdef CB_
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<a[i][j]<<' ';
        }cout<<endl;
    }
    #endif

    l = 0; r = 200;

    while( l <= r) {
        mid = (l + r) /2;

        if(go(a,mid)) {
            r = mid -1;
            ans = min(ans,mid);
        }else{
            l = mid + 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

bool go(vector<vector<int>>&a, int k)
{
    for(int i = 0; i + k < 200; i++){
        if(bfs(a,i, i+k)) {
            return true;
        }
    }
    return false;
}

int bfs(vector<vector<int>>&a, int t1, int t2)
{
    int val = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
#ifdef CB
    cout<<"k: "<<k<<endl;
#endif

    if(a[0][0]< t1) return 0;
    if(a[0][0] > t2) return 0;

    vector<vector<int>>v(n, vector<int>(n,0));

    queue<pair<int,int>>q;
    q.push(make_pair(0,0));
    v[0][0] = 1;

    while(!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        if(x == n-1 && y == n-1) {
            #ifdef CB
            cout<<"OK"<<endl;
            #endif
            return true;
        }
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >=n || ny < 0 || ny >=n) continue;
            if(!v[nx][ny] && t1 <=a[nx][ny] && t2 >= a[nx][ny]) {
                v[nx][ny] = 1;
                q.push(make_pair(nx,ny));
            }
        }
    }
    return 0;
}