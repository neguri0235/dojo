#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int n,a,sum;

int main()
{
    cin>>n;
    while(n--){

        cin>>a;
        if(a == 0) {
            v.pop_back();
        }else{
            v.push_back(a);
        }
    }

    for(auto& a : v) {
        sum += a;
    }
    cout<<sum<<endl;

    return 0;
}
