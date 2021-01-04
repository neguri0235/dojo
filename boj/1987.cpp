#include <iostream>

using namespace std;

int R, C,ans;
string a[21];

int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, 1, -1};
int A[256];

int go(int r, int c, int cnt)
{

#ifdef DBG
    cout<<'['<<r<<' '<<c<<']'<<cnt<<' '<<a[r][c]<<endl;
#endif
    for(int i = 0; i<4; i++){
        int nr = r + dr[i];
        int nc = c + dc[i];

        if (nr < 0 || nc < 0 || nr >= R || nc >= C) {
            continue;
        }

        if(A[a[nr][nc]]){
            continue;
        }
        A[a[nr][nc]] = 1;
        ans = max(cnt+1,ans);
        int temp = go(nr,nc,cnt+1);
        A[a[nr][nc]] = 0;
        if(temp > ans) {
        // /    ans = temp;
        }
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    #ifdef DBG
    freopen("1987.txt","r",stdin);
    #endif
    cin>>R>>C;

    for(int i = 0; i<R; i++){
        cin>>a[i];
    }
    A[a[0][0]] = 1;
    cout<<go(0,0,1)<<endl;
    //cout<<ans<<endl;

    return 0;
}