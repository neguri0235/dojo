#include <iostream>
#include <vector>

using namespace std;



int go(vector<int>&a)
{
    int ans = 0;
    if(a.size() == 2) {
        return 0;
    }
 
    for(int i = 1; i<a.size()-1; i++){
        int sum = 0;
        sum = a[i-1] * a[i+1] ;
        vector<int>b(a);
        b.erase(b.begin()+i);
        sum += go(b);

        ans = max(ans,sum);

    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    cout<<go(a)<<endl;

    return 0;
}