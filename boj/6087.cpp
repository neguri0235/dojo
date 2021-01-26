#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <queue>

using namespace std;


int dx [] = {1, -1, 0, 0};
int dy [] = {0, 0, 1, -1};

int main()
{
    ios_base::sync_with_stdio(false);
#ifdef CB
    freopen("in.txt","r",stdin);
#endif
    int n, m,ans = 0;
    bool start = false;
    pair<int,int> from, to;

    cin>>m>>n;

    vector<string>a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
        for(int j = 0; j<m; j++){
            if(a[i][j] == 'C' && start == false) {
                from = make_pair(i,j);
                start = true;
                a[i][j] = '.';
            }else if(a[i][j] == 'C' && start == true){
                to = make_pair(i,j);
                a[i][j] = '.';
            }
        }
    }

#ifdef CB
    cout<<from.first<< ' '<<from.second<<endl;
    cout<<to.first<< ' '<<to.second<<endl;
#endif

    vector<vector<int>>v(n,vector(m,-1));
    queue<pair<int,int>>q;
    q.push(from);
    v[from.first][from.second] = 0;

    while(!q.empty()){
        auto [x,y] = q.front(); q.pop();

        for(int k = 0; k<4; k++){
            
            int nx = x + dx[k];
            int ny = y + dy[k];

            while(nx >= 0 && nx < n && ny >= 0 && ny < m && ((v[nx][ny] > v[x][y] + 1) || v[nx][ny] == -1)  && a[nx][ny] == '.'){
                v[nx][ny] = v[x][y] + 1;
                q.push(make_pair(nx,ny));
                nx += dx[k];
                ny += dy[k];
            }
        }
    }

#ifdef CB
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<v[i][j]<< '\t';
        }cout<<endl;
    }
#endif

    cout<<v[to.first][to.second]-1<<endl;



    return 0;
}
