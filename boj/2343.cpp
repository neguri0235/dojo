#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,M,ans;

bool check(vector<int>&a, long long k)
{
    long long sum = 0;
    int count = 0;
    for (size_t i = 0; i < a.size(); i++)
    {
        if (sum + a[i] > k) {
            count += 1;
            sum = 0;
        }
        sum += a[i];
    }
#ifdef DBG
    cout << "count: " << count << endl;
#endif
    return count >= M;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin>>N>>M;
    vector<int>A(N);
    for(int i = 0; i<N; i++){
        cin>>A[i];
    }
    sort(begin(A),end(A));
    long long l, r;
    l = 0; r = 100000000;

    while(l <= r) {
        long long mid = (l+r)/2;
        #ifdef DBG
        cout<<mid<<endl;
        #endif
        if(check(A,mid)){
        #ifdef DBG
        cout<<"CHECKED: "<<mid<<endl;
        #endif
            l = mid +1;
            if(ans < mid) ans = mid;
        }else{
            r = mid-1;
        }
    }
    #ifdef DBG
    cout<<"ANS: ";
    #endif
    cout<<ans<<endl;
    return 0;
}
