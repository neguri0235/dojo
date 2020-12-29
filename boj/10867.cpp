#include <iostream>
#include <vector>
#include <algorithm>

/*
10
1 4 2 3 1 4 2 3 1 2
*/

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;

    cin>>n;
    vector<int>vec(n);

    for(int i = 0; i<n; i++){
	cin>>vec[i];
    }

   // sort(alpha.begin(), alpha.end());
   // alpha.erase(unique(alpha.begin(), alpha.end()),alpha.end());

   #ifdef DBG
    for(auto e: vec){
	cout<<e<<' ';
    }cout<<endl;
    #endif

    sort(vec.begin(), vec.end());

    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for(auto e: vec){
	cout<<e<<' ';
    }cout<<endl;

    return 0;
}
