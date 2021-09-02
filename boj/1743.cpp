#include <iostream>
#include <algorithm>

using namespace std;

int a[105][105],ans,temp,n,m,k;

void dfs(int, int);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m>>k;

    for(int i = 0; i<k; i++){
        int x, y;
        cin>>x>>y;
        a[x][y] = 1;
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(a[i][j] == 1) {
                temp = 1;
                a[i][j] = 2;
                dfs(i,j);

            }
            ans = max({temp, ans});
        }
    }
    cout<<ans<<'\n';
    return 0;
}

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y)
{
    temp +=1;
    for(int i = 0; i<4; i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx <= 0 || ny <= 0 || nx >n || ny > m) continue;

        if(a[nx][ny] == 1){
            a[nx][ny] = 2;
            dfs(nx,ny);
        }
    }
}
