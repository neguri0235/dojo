#include <iostream>
#include <vector>

using namespace std;

int n, energy;

int go(vector<int>&a, int sum)
{
    int pwr = 0;
    int n = a.size();
    if(n == 2) return sum;

    for(int i = 1; i<n-1; i++){
        vector<int>b(a);
        int p = a[i-1] * a[i+1];
        b.erase(b.begin()+i);
        pwr = go(b,p+sum);
        energy = max(pwr,energy);
    }
    return sum; 
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    go(a,0);
    cout<<energy<<endl;

    return 0;
}