#include <iostream>
#include <vector>

using namespace std;

vector<int>v;
int main()
{
    int n,a;
    std::cin>>n;

    for(int i = 0; i<n; i++){
        cin>>a;
        v.insert(v.end()-a,i+1);
    }

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}
