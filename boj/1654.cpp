#include <iostream>
using namespace std;

long long n, m, A[10002],l = 1,r;
long long ans;


bool check(long long k)
{
    int s = 0;
    for(int i = 0; i<n; i++){
        s +=A[i]/k;
    }
    return (s>=m);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for(int i = 0; i<n; i++){
        cin>>A[i];
        if(r < A[i]) r = A[i];
    }

    while(l <= r){

        long long mid = (l+r)/2;

        if(check(mid)){
            l = mid+1;
            if(ans < mid) ans = mid;
        }else{
            r = mid -1;
        }
    }

    cout<<ans<<'\n';
    return 0;
}