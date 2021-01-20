#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

char a[8][8];
int check[8][8][9];


int dx[] = {0, 0, 1, -1, 1, -1, 1, -1, 0};
int dy[] = {1, -1, 0, 0, 1, 1, -1, -1, 0};

int main()
{
    ios_base::sync_with_stdio(false);

    int n = 8;

    vector<string> a(n);

    for(int i = 0; i<n; i++){
	cin>>a[i];
    }

    check[7][0][0] = true;
    queue<tuple<int,int,int>> q;
    q.push(make_tuple(7,0,0));
    bool ans = false;
    while(!q.empty()){

	auto [x,y,t] = q.front(); q.pop();

	if(x == 0 && y == 7) ans = true;

	for(int k = 0; k<9; k++){
	    int nx = x + dx[k];
	    int ny = y + dy[k];
	    int nt = min(t+1, 8);

	    if(0 <= nx && nx<n && 0 <= ny && ny < n){
		if(nx-t >= 0 && a[nx-t][ny] == '#') continue;
		if(nx-t-1>=0 && a[nx-t-1][ny] == '#') continue;

		if(check[nx][ny][nt] == false){
		    check[nx][ny][nt] = true;
		    q.push(make_tuple(nx, ny, nt));
		}
	    }
	}
    }

    cout<<( ans == false ? 0 : 1)<<endl;

    return 0;
}

