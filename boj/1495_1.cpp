#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, s, m, ans;

int v[1001];
int d[101][1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>s>>m;

    for(int i = 0; i<n; i++){
	cin>>v[i];
    }

    d[0][s] = 1;
    for(int i = 1; i<=n; i++){
	for(int j = 0; j<=m; j++){
	    if(d[i-1][j]) {
		if(j - v[i-1] >= 0) d[i][j-v[i-1]] = 1;
		if(j + v[i-1] <= m) d[i][j+v[i-1]] = 1;
	    }
	}
    }

    ans = 0;
#ifdef CB
    for(int i = 0; i<=n; i++){
	for(int j = 0; j<=m; j++){
	    cout<<d[i][j]<<' ';
	}
	cout<<endl;
    }
#endif
    for(int i = 0; i<=m; i++){
	if(d[n][i]) ans = i;
    }
    cout<<ans<<'\n';

    return 0;
}
