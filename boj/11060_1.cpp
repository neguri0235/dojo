#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
#ifdef DBG
    freopen("11060.txt","r",stdin);
#endif

    scanf("%d",&n);

    vector<int>A(n+10, 0);
    vector<int>D(n+10, -1);


    for(int i = 0; i<n; i++){
        scanf("%d",&A[i]);
    }

    D[0] = 0;

    for(int i = 0; i<n-1; i++){

        if(D[i] == -1) continue;


        for(int j = 1; j<=A[i]; j++){

            if(i+j >=n) break;

            if(D[i+j] == -1 || D[i+j] > (D[i]+1))
                D[i+j] = D[i]+1;
        }

    }

    printf("%d\n",D[n-1]);

    return 0;
}
