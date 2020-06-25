#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,b;
    cin>>n;
    vector<int> A = {0,1,2,3};
    while(n--){
        cin>>a>>b;
        swap(A[a],A[b]);
    }
    for(size_t i = 1; i<A.size(); i++){
        if(A[i] == 1) {
            cout<<i<<'\n'; break;
        }
    }
    return 0;
}
