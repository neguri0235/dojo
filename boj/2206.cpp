#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int n, m;

int a[1001][1001];
int d[1001][1001][2];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int main()
{   
    scanf("%d %d",&n, &m);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            scanf("%1d",&a[i][j]);
        }
    }
    d[0][0][0] = 1;
    queue<tuple<int,int,int>>q;
    q.push(make_tuple(0,0,0));
    while(!q.empty()){
        int x, y, z ;
        tie(x,y, z) = q.front(); q.pop();
        for(int i = 0; i<4;i++){
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if(nx < 0 || nx >=n || ny < 0 || ny >= m) continue;

            if(a[nx][ny] == 0 && d[nx][ny][z] == 0) {
                d[nx][ny][z] = d[x][y][z] + 1;
                q.push(make_tuple(nx, ny, z));
            }

            if(a[nx][ny] == 1 && z == 0 && d[nx][ny][1] == 0) {
                d[nx][ny][1] = d[x][y][0] + 1;
                q.push(make_tuple(nx, ny, 1));
            }
        }
    }

    int f1 = d[n-1][m-1][0];
    int f2 = d[n-1][m-1][1];
    if(f1 && f2) {
        printf("%d\n",min(f1,f2));
    }else if(f1){
        printf("%d\n",f1);
    }else if(f2){
        printf("%d\n",f2);
    }else{
        printf("%d\n",-1);
    }

    return 0;
}