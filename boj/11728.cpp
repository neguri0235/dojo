#include <iostream>
#include <set>

using namespace std;

multiset<long> si;

long n1,n2,a;

int main()
{
    std::ios::sync_with_stdio(false);

    cin>>n1>>n2;

    for(int i = 0; i<n1; i++) {
        cin>>a;
        si.insert(a);
    }

    for(int i = 0; i<n2; i++) {
        cin>>a;
        si.insert(a);
    }

    for(auto& a : si){
        cout<<a<<' ';
    }

    cout<<'\n';
    

    return 0;
}
