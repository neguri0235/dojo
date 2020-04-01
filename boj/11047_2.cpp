#include <iostream>
#include <vector>

using namespace std;

int N, K;

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>N>>K;
    vector<int>A(N,0);

    for(int i = 0; i<N; i++) {
        cin>>A[i];
    }

    int ret = 0;
    for(int i = N-1; i >= 0 ; i--) {

        int a = A[i];

        if (a <= K) {

            int b = K/a;
            ret += b;
            K = K%a;
        }
    }

    cout<<ret<<endl;
    return 0;
}
