#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int tc;
int n;
int a[502];
int s[502];
int d[502][502];


int go(int i, int j)
{

    if(i == j) return 0;

    if(d[i][j] != -1) return d[i][j];

    int &ans = d[i][j];

    for(int k = i; k<=j-1; k++){

        int temp = go(i,k) + go(k+1,j) + s[j] - s[i-1];

        if( ans == -1 || ans > temp) ans = temp;
    }

    return ans;
}

int main()
{
    cin>>tc;
    while(tc--){
        cin>>n;

        memset(d,-1, sizeof(d));
        memset(s,0,sizeof(s));

        for(int i = 1; i<=n; i++){
            cin>>a[i];
            s[i] = s[i-1] + a[i];
        }

        cout<<go(1,n)<<endl;
    }
    return 0;
}
