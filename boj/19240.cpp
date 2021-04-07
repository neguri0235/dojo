#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <cstdlib>

using namespace std;

#define task 300001
//#define task 3001

//bool a[task][task];
bool v[task];
int main()
{
    ios_base::sync_with_stdio(false);
    
    #ifdef CB
    freopen("in.txt", "r", stdin);
    #endif

    int tc, n, m, x, y;

    cin>>tc;
    while(tc--){
        cin>>n>>m;
        //memset(a, false, sizeof(a));
        memset(v, false, sizeof(v));
       v[1] = 1;
        for(int i = 0; i<m ;i++){
            cin>>x>>y;
            if(x == 1) {
                v[y] = 1;
            }else if(y == 1) {
                v[x] = 1;
            }
        }

        int num = 0;
        for(int i = 1; i<=n; i++){
            #ifdef CB
            cout<<i<<' '<<v[i]<<'\n';
            #endif
            if(v[i]) num +=1;
        }

        if((n - num) ){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
        #ifdef CB
        cout<<"--------"<<endl;
        #endif
    }
    return 0;
}