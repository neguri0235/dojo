#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    string a = to_string(n);
    if(a.size() * n >= m) {
        for(int i = 0; i<m;i++){
            cout<<a[i%a.size()];
        }cout<<endl;

    }else{
        for(int i = 0; i<n; i++){
            cout<<n;
        }cout<<endl;
    }
    return 0;
}