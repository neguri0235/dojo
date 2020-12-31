#include <iostream>

using namespace std;

int n, m;
int x2,x3,y2,y3;

string a[21];

int dy[] = {1,-1,0,0};
int dx[] = {0,0,1,-1};

int go(int y2, int x2, int y3, int x3, int cnt)
{
    bool coin1 = false;
    bool coin2 = false;

    if(cnt >=11) {
        return -1;
    }

    if(y2 < 0 || x2 < 0 || y2 >= n || x2 >= m) {
        coin1 = true;
    }

    if(y3 < 0 || x3 < 0 || y3 >= n || x3 >= m) {
        coin2 = true;
    }

    if(coin1 == 1 && coin2 == 1){
        return -1 ;
    }else if(coin1 == 1 || coin2 == 1){
        return cnt;
    }

    int ans = -1;

    for(int i = 0; i<4; i++){

        int ny1 = y2+dy[i];
        int nx1 = x2+dx[i];
        int ny2 = y3+dy[i];
        int nx2 = x3+dx[i];
        
        if(ny1 >=0 && nx1 >=0 && ny1<n && nx1<m && a[ny1][nx1] == '#'){
            ny1 = y2;
            nx1 = x2;
        }

        if(ny2 >=0 && nx2 >=0 && ny2 <n && nx2<m && a[ny2][nx2] == '#'){
            ny2 = y3;
            nx2 = x3;
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
    x2 = x3 = y2 = y3 = -1;
    scanf("%d %d",&n, &m);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        for(int j = 0; j<m; j++){
            if(a[i][j] == 'o') {
                if(x2 == -1){
                    y2 = i;
                    x2 = j;
                }else{
                    y3 = i;
                    x3 = j;
                }
                a[i][j] = '.';
            }
        }
    }

    #ifdef DBG
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<a[i][j];
        }
        cout<<endl;
        
    }
    cout<<y2<<' '<<x2<<endl;
    cout<<y3<<' '<<x3<<endl;
    #endif
    cout<<go(y2,x2,y3,x3,0)<<endl;

    return 0;
}