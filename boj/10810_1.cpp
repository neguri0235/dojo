#include <iostream>
#include <vector>

using namespace std;

int N,M,i,j,k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>N>>M;
    vector<int>a(N,0);
    for(int s = 0; s<M; s++){
        cin>>i>>j>>k;

        for(int p = i-1; p<=j-1; p++){
            a[p] = k;
        }
    }

    for(auto e : a){
        cout<<e<<' ';
    }cout<<endl;

    return 0;
}