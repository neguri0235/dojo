#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

int tc, n, m;
string str;

const int coverType[4][3][2] = {
{{0,0},{1,0},{0,1}},
{{0,0},{0,1},{1,1}},
{{0,0},{1,0},{1,1}},
{{0,0},{1,0},{1,-1}}
};

bool set(vector<vector<int>>& board, int y, int x, int type, int delta)
{
    bool ok = true;
    for(int i = 0; i<3; i++){
        const int ny = y + coverType[type][i][0];
        const int nx = x + coverType[type][i][1];

        if(ny < 0 || nx < 0 || ny >= board.size() || nx >= board[0].size()) {
            ok =false;
        }else if((board[ny][nx] += delta > 1)){
            ok = false;
        }
    }
    return ok;
}


int cover(vector<vector<int>>& board)
{
    int y = -1, x = -1;
    for(int i = 0; i<board.size(); i++){
        for(int j = 0; j<board[i].size(); j++){
            if(board[i][j] == 0){
                y = i;
                x = j;
                break;
            }
        }
        if(y != -1) break;
    }
    if(y == -1) return 1;

    int ret = 0;
    for(int type = 0; type<4; type++){
        if(set(board,y,x,type,1)) {
            ret += cover(board);
        }
        set(board, y, x, type, -1);
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>tc;
    while(tc--){
        cin>>n>>m;
        vector<vector<int>> board(n,vector<int>(m));
        for(int i = 0; i<n; i++){
            cin>>str;
            for(int j = 0; j<m; j++){
                if(str[j] == '#') board[i][j] = 1;
                else board[i][j] = 0;
            }
        }
        #ifdef CB
        for(auto e : board){
            for(auto q : e) {
                cout<<q<<' ';
            }cout<<endl;
        }
        #endif
        cout<<cover(board)<<endl;
        
    }
    return 0;
}

