#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
#ifdef CBåçå
    freopen("in.txt","r",stdin);
#endif
    cin>>n;

    vector<string>a(n);
    vector<string>b;

    for(int i = 0; i<n; i++){
	cin>>a[i];
	b.push_back(a[i]);
	for(int j = 0; j<n; j++){
	    if(b[i][j] == 'G') b[i][j] = 'R';
	}
    }
#ifdef CB
    for(auto e : a) {
	cout<<e<<endl;
    }

    cout<<"-----"<<endl;
    for(auto e : b) {
	cout<<e<<endl;
    }
#endif

    // three color 

    int ans1 = 0;
    int ans2 = 0;

    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};


    for(int i= 0; i<n; i++){
	for(int j = 0; j<n; j++){

	    if(a[i][j] != '0') {
		ans1 += 1;

		queue<pair<int,int>>q;
		q.push(make_pair(i,j));
		char c = a[i][j];
		while(!q.empty()){

		    auto [x,y] = q.front(); q.pop();
		    for(int k = 0; k<4; k++){
			int nx = x + dx[k];
			int ny = y + dy[k];

			if(nx < 0 || nx >=n || ny < 0 || ny >=n ) continue ;

			if(a[nx][ny] == c) {
			    q.push(make_pair(nx,ny));
			    a[nx][ny] = '0';
			}
		    }
		}
	    }

	}
    }

    for(int i= 0; i<n; i++){
	for(int j = 0; j<n; j++){

	    if(b[i][j] != '0') {
		ans2 += 1;

		queue<pair<int,int>>q;
		q.push(make_pair(i,j));
		char c = b[i][j];
		while(!q.empty()){

		    auto [x,y] = q.front(); q.pop();
		    for(int k = 0; k<4; k++){
			int nx = x + dx[k];
			int ny = y + dy[k];

			if(nx < 0 || nx >=n || ny < 0 || ny >=n ) continue ;

			if(b[nx][ny] == c) {
			    q.push(make_pair(nx,ny));
			    b[nx][ny] = '0';
			}
		    }
		}
	    }

	}
    }

    cout<<ans1<<' '<<ans2<<endl;

    //  two color

    return 0;
}
