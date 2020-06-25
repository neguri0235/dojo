#include <iostream>
#include <algorithm>

using namespace std;


int N, A[52],ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>N;

    for(int i = 0; i<N; i++){
        cin>>A[i];
    }

    sort(begin(A),begin(A)+N);
    ans = A[0]*A[N-1];
    cout<<ans<<'\n';

#ifdef DBG
    for(int i = 2; i<=77; i++){

        if(77%i == 0){
            cout<<i<<' ';
        }
    }

#endif

    return 0;
}
