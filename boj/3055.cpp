#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <vector>


using namespace std;

int main()
{
#ifdef CB
    freopen("in.txt","r",stdin);
#endif
    ios_base::sync_with_stdio(false);

    int n,m;
    pair<int,int> D, S;
    vector<pair<int,int>>water;

    cin>>n>>m;
    vector<string> a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
        for(int j = 0; j<m; j++){
            if(a[i][j] == 'D'){
                D = make_pair(i,j);
            }else if (a[i][j] == 'S'){
                S = make_pair(i,j);
             //   a[i][j] = '.';
            }else if(a[i][j] == '*'){
                water.push_back(make_pair(i,j));
            }
        }
    }


    vector<vector<int>>w(51,vector<int>(51,-1));

    queue<pair<int,int>>q;

    for(auto& e: water){
        q.push(e);
        w[e.first][e.second] = 0;
    }
        
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};


    while(!q.empty()){

        auto [x,y] = q.front(); q.pop();

        for(int k = 0; k<4; k++){
            int nx = x + dx[k]; 
            int ny = y + dy[k]; 

            if(nx < 0 || nx >= n || ny < 0 || ny >=m  || a[nx][ny] == 'X' || w[nx][ny] != -1) continue;


            //if(a[nx][ny] == 'D' || a[nx][ny] == 'S') continue;

            w[nx][ny] = w[x][y] + 1;
            q.push(make_pair(nx,ny));

        }
    } 

#ifdef CB
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<w[i][j]<<' ';
        }cout<<endl;
    }
#endif

    vector<vector<int>>b(51,vector<int>(51,-1));
    q.push(D);
    b[D.first][D.second] = 0;
    while(!q.empty()){

        auto [x,y] = q.front(); q.pop();

        for(int k = 0; k<4; k++){

            int nx = x + dx[k];
            int ny = y + dy[k];

            if(nx < 0 || nx >= n || ny < 0 || ny >=m  || a[nx][ny] == 'X' || b[nx][ny] != -1) continue;


            if(b[x][y] + 1 <= w[nx][ny]) {
                q.push(make_pair(nx,ny));
                b[nx][ny] = b[x][y] + 1;
            }
        }
    }


#ifdef CB
    cout<<"------------------------"<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<b[i][j]<<' ';
        }cout<<endl;
    }
#endif

    cout<<b[S.first][S.second]<<endl;

    return 0;
}
