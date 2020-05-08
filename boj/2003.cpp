#include <iostream>
#include <vector>

using namespace std;

int n,ans;
unsigned long long m, sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;

    vector<int>A(n+2);

    for(int i = 0; i<n; i++){
        cin>>A[i];
    }

    for(int i = 0; i<n; i++){
        sum = 0;
        for(int j = i; j<n; j++){
            sum +=A[j];
            if(sum == m) ans+=1;
        }
    }

    cout<<ans<<'\n';
    return 0;
}
