#include <iostream>
#include <algorithm>

using namespace std;

int n;
int d[31][40001];
int a[31];

int t,sum;
int tn[8];

int main()
{
    cin>>n;

    for(int i = 1; i<=n; i++){
        cin>>a[i];
        sum += a[i];
    }

    cin>>t;
    for(int i = 0; i<t; i++){
        cin>>tn[i];
    }
        
    for(int i = 1; i<=n; i++){

        d[i][a[i]] = 1;

        for(int j = 1; j<=sum; j++){

            if(d[i-1][j] == 1) {
                d[i][j] = d[i-1][j];
                if(j + a[i] <= sum)
                d[i][j + a[i]] = 1;
                d[i][abs(j - a[i])] = 1;
            }
        }

    }

    for(int i = 0; i<t; i++){
      if(d[n][tn[i]] == 1) cout<<"Y ";
      else cout<<"N ";
    }
    cout<<endl;

    return 0;
}
