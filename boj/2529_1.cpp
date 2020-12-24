#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int n;
string s;

int main()
{
    ios_base::sync_with_stdio(false);


    cin>>n;
    cin>>s;;

    vector<int>v1(2);
    vector<int>v2(2);

    for(int i = 0; i<n; i++){
        v1[i] = 9-i;
    }

    for(int i = 0; i<n; i++){
        v2[i] = i;
    }

    
    do {


   }while(next_permutation(v1.begin(), v1.end()));
    
    do{

    }while(prev_permutation(s.begin(),s.end()));

    return 0;
}