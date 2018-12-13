#include <iostream>
#include <vector>

using namespace std;

vector<int> v1;
vector<int> v2;
int a;
int ans;
int sum;


int main()
{
    ans = 101;
    for(int i = 0; i<7; i++){
        cin>>a;
        if(a%2) v1.push_back(a);
        else v2.push_back(a);
    }

    if(v1.size() == 0) {
        cout<<"-1"<<'\n';
    }else{

        for(int i = 0; i<v1.size(); i++) {
            sum += v1[i];
            if( ans > v1[i]) ans = v1[i];
        }

        cout<<sum<<'\n';
        cout<<ans<<'\n';
    }

    return 0;
}
