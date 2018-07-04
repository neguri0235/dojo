#include <iostream>

int n,s,m;
int a[102];
bool d[102][1002];

void solve()
{
    scanf("%d %d %d",&n, &s, &m);

    for(int i = 1; i<=n; i++){
        scanf("%d",&a[i]);
    }

    d[0][s] = true;

    for(int i = 0; i<=n-1; i++){

        for(int j = 0; j<=m; j++){


            if(d[i][j] == false) {
                continue;
            }

            if( j - a[i+1] >= 0){
                d[i+1][j-a[i+1]] = true;
            }

            if( j + a[i+1] <= m){
                d[i+1][j+a[i+1]] = true;
            }

        }
    }

    int ans = -1;

    for(int i = 0; i<=m; i++){
        if(d[n][i]) ans = i;
    }

    printf("%d\n",ans);

}

int main()
{
    
    solve();

    return 0;
}
