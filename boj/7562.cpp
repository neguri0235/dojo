#include <iostream>
#include <queue>

using namespace std;

int tc,n;

struct POS {
    int r;
    int c;
};


int bfs(POS& from, POS& to);

int main()
{
    ios_base::sync_with_stdio(false);

    cin>>tc;
    while(tc--){
        POS from;
        POS to;
        cin>>n;
        cin>>from.r>>from.c;
        cin>>to.r>>to.c;


        cout<<bfs(from,to)<<'\n';
    }

    return 0;
}


int dr[] = {-2,-1,1,2,2,1,-1,-2};
int dc[] = {1,2,2,1,-1,-2,-2,-1};

int bfs(POS& from, POS& to)
{
    queue<POS> q;

    vector<vector<int>>A(n+1,vector<int>(n+1,-1));
    q.push(from);

    while(!q.empty()){

        auto pos = q.front(); q.pop();

        if(pos.r == to.r && pos.c == to.c){
            return A[to.r][to.c];
        }


        for(int i = 0; i<8; i++){

            int nr = pos.r + dr[i];
            int nc = pos.c + dc[i];

            if(nr <= 0 || nc <= 0 || nr > n || nc > n) continue;

            if(A[nr][nc] == 0) {
                A[nr][nc] = A[pos.r][pos.c] + 1;
                q.push({nr,nc});
            }

        }
    }
#ifdef DBG
    cout<<"NOT "<<endl;
#endif
    return 0;
}
