#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


int a[502];
int d[502][502];

int go(int i, int j)
{
    if(i == j) return 0;

    int &ans = d[i][j];
    int sum = 0;

    if(ans != -1) return ans;

    for(int k = i; k<=j; ++k){
	sum += a[k];
    }

    for(int k = i; k<=j; ++k){
	int temp = go(i,k) + go(k+1, j) + sum;
	if(ans == -1 || temp < ans) {
	    ans = temp;
	}
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int tc,n;
    cin>>tc;
    while(tc--){
	cin>>n;
	memset(a,0,sizeof(a));
	memset(d,-1,sizeof(d));

	for(int i = 0; i<n; i++){
	    cin>>a[i];
	}
	cout<<go(0,n-1)<<'\n';
    }
}

