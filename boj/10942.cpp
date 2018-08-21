#include <iostream>
#include <cstdio>
#include <cstring>


using namespace std;

int n, tc, s, e;
int a[2001];
int d[2001][2001];

int go(int i, int j)
{
    if(i == j) return 1;
    else if(i+1 == j) {
        if(a[i] == a[j]) return 1;
        else return 0;
    }

    if(d[i][j] >=0) return d[i][j];

    if( a[i] != a[j]) return d[i][j] = 0;
    else return d[i][j] = go(i+1, j-1);
}


int main()
{
    cin>>n;

//    memset(d,-1,sizeof(d));

    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }

    cin>>tc;
/*
    while(tc--){
        cin>>s>>e;
        cout<<go(s-1,e-1)<<endl;
    }
*/


    for(int i = 0; i<n; i++) d[i][i] = 1;

    for(int i = 0; i<n-1; i++){
        if(a[i] == a[i+1]) d[i][i+1] = 1;
    }

    for(int k = 3; k<=n; k++){

        for(int i = 0; i<= n-k+1; i++){

            int j = i+k-1;

            if(a[i] == a[j] && d[i+1][j-1]) {
                d[i][j] = 1;
            }
        }

    }


    while(tc--){
        scanf("%d %d",&s,&e);
        printf("%d\n",d[s-1][e-1]);
    }

    return 0;
}
