#include <iostream>
#include <vector>

using namespace std;

unsigned int n, k, left, start, ed, mid,r;

unsigned int go(vector<int>&a, unsigned int c)
{
    int sum = 0;
    for(auto e : a) {
        sum += e/c;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>k;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(ed < a[i]) ed = a[i];
    }

    while(start < ed){
        mid = (start + ed)/2;
         r = go(a,mid);
         if(r < k){
             ed = mid-1;
         }else{
             start = mid+1;
         }
    }

    cout<<mid<<endl;
    return 0;
}