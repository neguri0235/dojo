#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N,M,a,b,c;
    ios_base::sync_with_stdio(false);
    cin>>N>>M;
    vector<int>v(N+1,0);

    for(int i = 0; i<M; i++) {
        cin>>a>>b>>c;

        for(int j = a; j<=b; j++) {
            v[j] = c;
        }
    }

    for(int i = 1; i<N+1; i++) {
        cout<<v[i]<<' ';
    }
    cout<<'\n';




    return 0;
}
