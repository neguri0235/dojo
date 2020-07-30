#include <iostream>

int n,A[22];
int D[100000*20+5];

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }

    for(int i = 0; i<(1<<n); i++){

        long long sum = 0;

        for(int j = 0; j<n; j++){

            if(i &(1<<j)){
                sum += A[j];
            }
        }
        D[sum] = 1;
    }

    int i = 1;
    for(i = 1; ;i++){
        if(!D[i])break;
    }
    cout<<i<<'\n';

    return 0;
}