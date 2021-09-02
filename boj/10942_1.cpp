#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int a[2002];
int d[2002][2002];

int go(int i, int j)
{
    if(i == j) return 1;
    if(i+1 == j) return a[i] == a[j];

    if(d[i][j] >= 0) return d[i][j];

    if(a[i] != a[j]) return d[i][j] = 0;

    return d[i][j] = go(i+1,j-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,tc;
    cin>>n;

    memset(a,0,sizeof(a));
    memset(d,-1,sizeof(d));

    for(int i = 0; i<n; i++){
	cin>>a[i];
    }

    cin>>tc;
    while(tc--){
	int q1, q2;
	cin>>q1>> q2;
	cout<<go(--q1, --q2)<<'\n';
    }

    return 0;
}
