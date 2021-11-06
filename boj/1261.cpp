#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int a[102][102];
int d[102][102];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    int n, m;
    string str;
    cin>>m>>n;

    for(int i = 0; i<n; i++){
        cin>>str;
        for(int j = 0; j<m; j++){
            a[i][j] = str[j] - '0';
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            d[i][j] = 9999;
        }
    }

    queue<pair<int,int>>q;
    q.push({0,0});
    d[0][0] = 0;

    while(!q.empty()){
        auto next = q.front(); q.pop();
        int y = next.first;
        int x = next.second;

        for(int t = 0; t<4; t++){
            int ny = y + dy[t];
            int nx = x + dx[t];

            if(ny > n || nx > m || ny < 0 || nx < 0) continue;

            if(a[ny][nx] == 0 && d[ny][nx] > d[y][x]) {
                q.push({ny,nx});
                d[ny][nx] = d[y][x];
            }

            if(a[ny][nx] == 1 && d[ny][nx] > (d[y][x] + 1)){
                q.push({ny,nx});
                d[ny][nx] = d[y][x] + 1;
            }

        }

    }
    cout<<d[n-1][m-1]<<'\n';

    return 0;
}