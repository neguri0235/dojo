#include <iostream>

using namespace std;

int map[51][51];
int w,h,ans;

void input()
{

    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++) {
            scanf("%d",&map[i][j]);
        }
    }
/*
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++) {
            printf("%d ",map[i][j]);
        }
        cout<<'\n';
    }
*/

}

void clear()
{
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++) {
            map[i][j] = 0;
        }
    }
}

int dy[] = {-1,-1,-1,0,1,1,1,0};
int dx[] = {-1,0,1,1,1,0,-1,-1};

int check(int y, int x)
{
    if(y >=h || x >=w || y < 0 || x <0) return 0;
    if(map[y][x]) return 1;
    else return 0;
}

void go(int y, int x)
{
    map[y][x] = 0;

    for(int i = 0; i<8; i++) {
        if(check(y+dy[i], x+dx[i]))
            go(y+dy[i], x+dx[i]);
    }
}

void solve()
{
    for(int i = 0; i<h; i++) {
        for(int j = 0; j<w; j++) {
            if(map[i][j] == 1) {
                go(i,j);
                ans++;
            }
        }
    }
}

int main()
{

    while(1){
        cin>>w>>h;
        if(w == 0 && h == 0) break;

        input();
        solve();
        clear();

        cout<<ans<<'\n';
        ans = 0;
    }

    return 0;
}
