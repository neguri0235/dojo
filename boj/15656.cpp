#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N,M,A[9],check[9];
vector<int>c;

void go()
{
    if(c.size() == (size_t)M){
        for(auto e : c) cout<<e<<' ';
        cout<<'\n';
        return ;
    }

    for(int i = 0; i<N; i++){
        //if(check[i]) continue;
        check[i] = 1;
        c.push_back(A[i]);
        go();
        c.pop_back();
        check[i] = 0;
    }
}


int main()
{
    cin>>N>>M;
    for(int i = 0; i<N; i++){
        cin>>A[i];
    }

    sort(begin(A),begin(A)+N);
    go();
    return 0;
}
