#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    #ifdef CB
    freopen("in.txt","r",stdin);
    #endif
    int tc, n, x;
    cin>>tc;
    while(tc--){
        deque<int> deq;

        cin>>n>> x;
        for(int i = 1; i<=n; i++){
            deq.push_back(i);
        }
        string ans = "NO";
        do {
            int sa = 0;
            int sb = 0;
            int turn = 0;
            deque<int>a(deq);
            while(!deq.empty()) {
 
                if(turn == 0) {
                    turn = 1;
                    if(a.front() > a.back()) {
                        sa += a.front(); a.pop_front();
                    }else{
                        sa += a.back(); a.pop_back();
                    }
                }else{
                    turn = 0;
                    if(a.front() > a.back()) {
                        sb += a.front(); a.pop_front();
                    }else{
                        sb += a.back(); a.pop_back();
                    }                
                }
            }
            cout<<sa<<' '<<sb<<endl;
            if((sa - sb) == x) {
                ans = "YES";
                break;
            }
            for(auto e : deq) {
                cout<<e << ' ';
            }cout<<endl;
        }while(next_permutation(deq.begin(), deq.end()));
        if(ans == "YES"){
            cout<<ans<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    return 0;
}