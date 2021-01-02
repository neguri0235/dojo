#include <iostream>

using namespace std;

int n, m, cy1=-1, cx1=-1, cy2=-1, cx2=-1;
string str;

string a[21];

int dy[] = {1,-1, 0, 0};
int dx[] = {0, 0, 1, -1};

int go(int y2, int x2, int y3, int x3, int cnt)
{

    bool fall1 = false;
    bool fall2 = false;

    if(cnt >= 10) { 
        return -1;
    }

    if( y2 < 0 || x2 < 0 || y2 >=n || x2 >= m) {
        fall1 = true;
    }

    if( y3 < 0 || x3 < 0 || y3 >=n || x3 >= m) {
        fall2 = true;
    }

    if(fall1 == 1 && fall2 == 1) {
        return -1;
    }

    if(fall1 == 1|| fall2 == 1) {
        return cnt;
    }
    int ans = -1;

    for(int i = 0; i<4; i++){
        int ny1 = y2 + dy[i];
        int nx1 = x2 + dx[1];
        int ny2 = y3 + dy[i];
        int nx2 = x3 + dx[i];

        if( ny1 >=0 && nx1 >= 0 && ny1 < n && nx1 <m && a[ny1][nx1] == '#'){
            ny1 = cy1;
            nx1 = cx1;
        }

        if(ny2 >=0 && nx2 >= 0 && ny2 < n && nx2 < m && a[ny2][nx2] == '#'){
            ny2 = cy2;
            nx2 = cx2;
        }

        int r = go(ny1,nx1,ny2,nx2,cnt+1);
        if(r == -1) continue;
        if(ans == -1 || ans > r) {
            ans = r;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>m;

    for(int i = 0; i<n; i++){
        cin>>a[i];
        for(int j = 0; j<m; j++){
            if(a[i][j] == 'o'){
                if(cy1 == -1) {
                    cy1 = i;
                    cx1 = j;
                }else{
                    cy2 = i;
                    cx2 = j;
                }
                a[i][j] = '.';
            }
        }
    }

#ifdef DBG
for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
        cout<<a[i][j]<<' ';
    }cout<<endl;
}
cout<<cy1<<' '<<cx1<<' '<<cy2<<' '<<cx2<<endl;
#endif
    cout<<go(cy1,cx1, cy2, cx2, 0)<<endl;
    return 0;
}