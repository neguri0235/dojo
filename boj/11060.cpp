#include <iostream>
#include <vector>


using namespace std;

int n;

int main()
{
#ifdef DBG
    freopen("11060.txt","r",stdin);
#endif
    scanf("%d",&n);

    vector<int>v(n+10,0);
    vector<int>D(n+10,-1);

    D[0] = 0;


    for(int i = 0; i<n; i++){
        scanf("%d",&v[i]);
    }


    for(int i = 1; i<n; i++){
        for(int j = 0; j<i; j++){

            if(D[j] != -1 && i-j <= v[j]){

                if(D[i] == -1 || D[i] > D[j] +1){
                    D[i] = D[j] + 1;
                } 
            }
        }
    }


    cout<<D[n-1]<<endl;

    return 0;
}


