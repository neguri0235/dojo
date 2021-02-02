#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    string from, to;
    int ans = 0;

    cin>>from;
    cin>>to;

    while(to.size() > 0){

        if(from == to){
            ans = 1;
            break;
        }

        if(to.back() == 'A'){
            to.erase(to.end()-1);
        }else{
            to.erase(to.end()-1);
            reverse(to.begin(),to.end());
        }
    }
    cout<<ans<<endl;

    return 0;
}
