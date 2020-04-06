#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef unsigned long long LL;

int main()
{
    ios_base::sync_with_stdio(false);
    int N;

    cin>>N;
    vector<int>A(N,0);

    for(int i=0; i<N; i++) {
        cin>>A[i];
    }

    sort(A.begin(), A.end(), [](int a, int b){ return a<b;});

    LL sum(0);
    LL ret(0);

    for(auto e : A) {
       
        sum += e;
        ret += sum;

    }

    cout<<ret<<endl;
    return 0;
}
