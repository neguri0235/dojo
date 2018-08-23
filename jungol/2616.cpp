#include <iostream>

using namespace std;

int n,m,sum,sol;
int mi[102];
int ci[102];
long long d[10000002];

int main()
{
    cin>>n>>m;

    for(int i = 1; i<=n; i++) cin>>mi[i];
    for(int i = 1; i<=n; i++){
        cin>>ci[i];
        sum += ci[i];
    }


    for(int i = 1; i<=n; i++) {

        for(int j = sum ; j >=1; j--){

            if(j - ci[i] >= 0)
                d[j] = std::max(d[j], d[j-ci[i]] + mi[i]);

            if(i == n && d[j] >= m) sol = j;
        }


    }
    cout<<sol<<endl;

    return 0;
}
