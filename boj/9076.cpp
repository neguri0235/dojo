/*
4
10 8 5 7 9
10 9 10 9 5
10 3 5 9 10
1 2 3 6 9
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        vector<int>a(5);
        for(int i = 0; i<5; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        
        if((a[3] - a[1]) >=4) {
            cout<<"KIN"<<endl;
        }else{
            cout<<a[1]+a[2]+a[3]<<endl;
        }
    }
    return 0;
}