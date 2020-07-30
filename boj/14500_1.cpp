#include<iostream>

using namespace std;

int N, M, ans;
int A[502][502];
int V[502][502];

void calc(int,int);
void go(int,int,int,int);

int main()
{
    
    ios_base::sync_with_stdio(false);
    #ifdef DBG
    freopen("14500.txt","r",stdin);
    #endif
    cin>>N>>M;

    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cin>>A[i][j];
        }
    }

    for(int i = 0; i<N; i++){
        for (int j = 0; j < M; j++) {
            go(i, j, 0, 0);
            calc(i,j);
        }
    }
    cout << ans << '\n';

    return 0;
}

int dr[] = {0,0,-1,1};
int dc[] = {1,-1,0,0};

void go(int r, int c, int depth, int s)
{
    if(depth == 4){
        ans = max(s,ans);
        return;
    }

    for(int i  = 0; i<4; i++){
        int nr = r + dr[i];
        int nc = c + dc[i];

        if(nr < 0 || nr >= N || nc < 0 || nc >=M || V[nr][nc]) continue;

        V[nr][nc] = 1;
        go(nr,nc, depth+1, s + A[nr][nc]);
        V[nr][nc] = 0;
    }
}

void calc(int r, int c)
{

    if (!((c + 1) >= M || (c + 2) >= M || (r + 1 >= N) || (c + 1  >= M)))
    {
        ans = max(ans, (A[r][c] + A[r][c + 1] + A[r][c + 2] + A[r + 1][c + 1]));
    }

    if(!( (c-1) < 0 || (c-2) < 0 || (r-1)<0 || (c-1) <0)){
        ans = max(ans, (A[r][c] + A[r][c-1] + A[0][c-2] + A[r-1][c-1]));
    }

    if(!((r-1< 0) || (r-2) < 0 || (r-1)< 0 || (c+1) >=M)){
        ans = max(ans, (A[r][c] + A[r-1][c] + A[r-2][c] + A[r-1][c+1]));
    }

    if(!((r+1>=M) || (c-1)<0 || (r+1) <=N  || (r+2) <=N)){
        ans = max(ans, A[r][c] + A[r+1][c-1] + A[r+1][c] + A[r+2][c]);

    }

}
