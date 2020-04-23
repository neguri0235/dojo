#include <iostream>
#include <algorithm>
#include <vector>
/*
10
1 100 2 50 60 3 5 6 7 8
*/
using namespace std;

typedef unsigned long long LL;

int N;

int main()
{
#ifdef DBG
    freopen("11055.txt","r",stdin);
#endif

    scanf("%d",&N);
    vector<LL>A(N);

    for(int i = 0; i<N; i++){
        scanf("%lld",&A[i]);
    }

    vector<LL>D;
    D = A;


    for(int i = 0; i<N; i++) {
        for(int j = 0; j<i; j++){
            if(i == j) continue;
            if(A[i] > A[j]) {
                D[i] = max(A[i] + D[j], D[i]);;
            }
        }
    }

    LL ret = 0;
    for(auto e : D){
        ret = max(ret,e);
    }
    cout<<ret<<endl;
    return 0;
}
