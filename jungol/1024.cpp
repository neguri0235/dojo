#include <iostream>
#include <queue>


int a[501][501];
int d[501][501];


using namespace std;

int dx[] = {1,0,-1,0};
int dy[] = {0,-1,0,1};


int main()
{
    int N,M;
    ios::sync_with_stdio(false);
    cin>>N>>M;

    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++) {
            cin>>a[i][j];
        }
    }

    queue<pair<int,int>> q;
    q.push(make_pair(0,0));

    while(q.empty() == false) {
        auto p = q.front();
        for(int i = 0; i<4; i++) {
            if( check(p.first + dy[i] , p.second + dx[i])){


            }
        }
    }

    return 0;
}
