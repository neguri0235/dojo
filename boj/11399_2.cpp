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
    vector<int>A(0,N);

    for(int i=0; i<N; i++) {
        cin>A[i];
    }

    sort(A.begin(), A.end(), [](int a, int b;){ return a>b;});
    for(auto e : A) {
        cout<<e<<' ';
    }
        


    return 0;
}
