#include <iostream>
#include <vector>
#include <set>
#include <tuple>
#include <queue>
#include <string>

using namespace std;
int n, m;
int a[1001][1001];
bool check[1001][1001];
int group[1001][1001];

vector<int> group_size;
int dx[] = {0, 0 ,1 ,-1};
int dy[] = {1, -1, 0, 0};

void bfs(int x, int y)
{
    int g = group_size.size();
    queue<pair<int,int>>q;
    q.push(make_pair(x,y));
    check[x][y] = true;
    group[x][y] = g;
    int cnt = 1;
    
    while(!q.empty()){
        int x, y;
        tie(x,y) = q.front(); q.pop();
        for(int k = 0; k<4; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
        
            if(nx < 0 || nx >=n || ny < 0 || ny >= m) continue;
            if(a[nx][ny] || check[nx][ny] == true) continue;
            q.push(make_pair(nx,ny));
            check[nx][ny] = true;
            group[nx][ny] = g;
            cnt +=1;
        }
    }
    group_size.push_back(cnt);
}

int main()
{
    cin>>n>>m;
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        for(int j = 0; j<m; j++){
            a[i][j] = s[j] - '0';
            check[i][j] = false;
            group[i][j] = -1;
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(a[i][j] == 0 && check[i][j] == false) {
                bfs(i,j);
            }
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(a[i][j]){
                cout<<0;
            }else{
                set<int>near;
                for(int k = 0; k<4; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if(0 <= nx && nx < n && 0<= ny && ny <m) {
                        if(a[nx][ny] == 0){
                            near.insert(group[nx][ny]);
                        }
                    }
                }
            
            int ans = 1;
            for(int g  :  near){
                ans += group_size[g];
            }
            cout<<ans%10;
            
            }
        }
    cout<<endl;
   }
   return 0;
}