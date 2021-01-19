#include <iostream>
#include <queue>
#include <string>

using namespace std;

bool prime[10002];

int check(int next, int i, int j);
int bfs(int from, int to);

int main()
{
    ios_base::sync_with_stdio(false);
    int tc, from, to;
#ifdef CB
    freopen("in.txt","r",stdin);
#endif

    cin>>tc;

    // sieve
    for(int i = 2; i<=10000; i++){
	if(prime[i]) continue;
	for(int j = i*i; j<10000; j+=i){
	    prime[j] = true;
	}
    }

    for(int i = 1000; i<10000; i++){
	prime[i] = !prime[i];
    }

#ifdef CB
    for(int i = 1000; i<10000; i++){
	if(prime[i]) cout<<i<<' ';
    }cout<<endl;
#endif

    while(tc--){
	cin>>from>>to;
	
	cout<<bfs(from,to)<<endl;

    }
    return 0;
}


int bfs(int from, int to)
{
    if(from == to) return 0;

    vector<int>v(10000,-1);

    queue<int>q; 
    q.push(from);
    v[from] = 0;

    while(!q.empty()){

	int next = q.front(); q.pop();

	for(int i = 0; i<4; i++){
	    for(int j = 0; j<=9; j++){

		int n = check(next,i,j);

		if(n == -1) continue;

		if(v[n] == -1 && prime[n] == true) {

		    v[n] = v[next] + 1;

		    if(n == to) {
			return v[n];
		    }
		    q.push(n);
		}
	    }
	}
    }

    return 0;
}

int check(int next, int i, int j)
{
    string str = to_string(next);

    str[i] = j + '0';

    int r = stoi(str);
    if(r < 1000) return -1;
    else return r;
}
