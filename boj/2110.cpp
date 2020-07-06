#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, l, r, ans;


bool check(vector<int>&a, int dist)
{

    int count = 1;
    int last = a[0];

    for(auto e : a){

	if( (e - last) >= dist){
	    last = e;
	    count += 1;
	}
    }

    return (count >=m);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin>>n>>m;
    vector<int>A(n);

    for(int i = 0; i<n; i++){
	cin>>A[i];
    }

    sort(begin(A), end(A));

    l = 1;
    r = A[n-1];

    while(l <= r) {
#ifdef DBG
	cout<<l<<' '<<r<<endl;
#endif
	int mid = (l+r)/2;
	if(check(A,mid)){
	    l = mid+1;
	    if(ans < mid) ans = mid;
	}else{
	    r = mid-1;
	}
    }

    cout<<ans<<endl;
    

    return 0;
}

