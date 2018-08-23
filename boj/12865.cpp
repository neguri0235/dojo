#include <iostream>
#include <cstdio>

using namespace std;

int n,k;
int wi[102];
int pi[102];

long long d[100002];


int main()
{
    cin>>n>>k;

    for(int i = 1; i<=n; i++) scanf("%d %d",&wi[i], &pi[i]);

//    d[0] = 1;

    for(int i = 1; i<=n; i++) {

        for(int j = k; j >= wi[i]; j--){

            d[j] = std::max(d[j], d[j-wi[i]] + pi[i]);

        }
    }

    cout<<d[k]<<endl;

    return 0;
}
