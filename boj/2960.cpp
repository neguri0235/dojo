#include <iostream>

using namespace std;

int d[1001];
int idx,ans,n,k;

int main()
{

    cin>>n>>k;

    for(int i = 2; i<=n; i++) {

        for(int j = i; j<=n; j +=i) {

            if(d[j] == 0){
                d[j] = 1;
                cout<<j<<' ';
                idx++;
                if(idx== k) {
                    ans = j;
                }

            }
        }
    }

    cout<<ans<<'\n';


    return 0;
}
