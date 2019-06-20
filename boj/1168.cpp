#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int N,K,sz;
    cin>>N>>K;
    vector<int> v(N);
/*
    for(int i = 1; i<=N; i++){
        v.push_back(i);
    }
*/
    iota(v.begin(),v.end(),1);

    cout<<'<';

    int i = K-1;
    K--;

    sz = N;

    while(sz > 1){

        cout<<v[i]<<", ";
        v.erase(v.begin() + i);

        sz--;

        i = i+K;
        if(i >= sz) i = i%sz;
    }
    cout<<v[0]<<'>'<<'\n';

    return 0;
}
