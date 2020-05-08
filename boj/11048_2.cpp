#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m;
#ifdef DBG
    freopen("11048.txt","r",stdin);
#endif


    vector<vector<int>>A(1002,vector<int>(1002,0));
    vector<vector<int>>D(1002,vector<int>(1002,0));


    scanf("%d %d",&n, &m);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            D[i][j] = max(D[i-1][j] , D[i][j-1]) + A[i][j];
        }
    }

    printf("%d",D[n][m]);
    return 0;
}
