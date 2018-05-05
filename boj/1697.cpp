#include <iostream>
#include <queue>


using namespace std;

#define MAX 900001
#define DBG 0

std::queue<int> q;
int from, to;

int visit[MAX];
int cnt[MAX];


void solve();

int main()
{

    cin>>from>>to;
    solve();

    return 0;
}


// x+1
// x-1
// 2x


void solve()
{
    q.push(from);

    while(q.empty() != true) {

        int a = q.front(); q.pop();

        if(a == to) {
            if(DBG) cout<<"FIND"<<endl;
            cout<<cnt[to]<<endl;
            return;
        }

        if( (a-1) >= 0 && visit[a-1] == 0) {
            visit[a-1] =1;
            q.push(a-1);
            cnt[a-1] = cnt[a] +1;
        }

        if( (a+1 < MAX) && visit[a+1] == 0) {
            visit[a+1] =1;
            q.push(a+1);
            cnt[a+1] = cnt[a] +1;
        }
        
        
        if( ( a*2 < MAX) && visit[a*2] == 0 ) {
            visit[a*2] =1;
            q.push(a*2);
            cnt[a*2] = cnt[a] +1;
        }
    }

}

