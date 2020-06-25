#include <iostream>
#include <vector>

using namespace std;

int go(vector<int>&);

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    cin>>n;
    vector<int>A(n+1);

    for(int i = 0; i<n;i++){
        cin>>A[i];
    }

    cout<<go(A)<<'\n';
    return 0;
}

int go(vector<int>& a)
{

    int ans = 0;

    if(n == 2){
        return 0;
    }

    for(size_t i = 1; i<a.size()-1; i++){

        int temp = a[i-1] * a[i+1];
        vector<int> b(a);
        b.erase(b.begin()+i);
        temp += go(b);
        if(temp > ans){
            ans = temp;
        }
    }

    return ans;
}


/*
   4
   1 2 3 4
*/
