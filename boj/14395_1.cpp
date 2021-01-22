#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int s, t;
    cin>>s>>t;

    if (s == t) {
	cout<<0<<endl;
	return 0;
    }

    vector<bool>a(1000000002,false);

    queue<pair<long long, string>> q;
    q.push(make_pair(s,""));
    a[s] = true;
    bool ans = false;
    while(!q.empty()){

	auto [next, path] = q.front(); q.pop();

	if(next == t) {
	    ans = true;
	    cout<<path<<endl;
	    break;
	}


	if(next * next < 1000000002) {
	    if(a[next*next] == false){

		q.push(make_pair(next*next, path+'*'));
		a[next*next] = true;
	    }
	}


	if(next + next < 1000000002) {
	    if(a[next+next] == false){

		q.push(make_pair(next+next, path+'+'));
		a[next+next] = true;
	    }
	}



	if(1) {
	    if(a[next-next] == false){

		q.push(make_pair(next-next, path+'-'));
		a[next-next] = true;
	    }
	}

	if(next) {
	    if(a[next/next] == false){

		q.push(make_pair(next/next, path+'/'));
		a[next/next] = true;
	    }
	}



    }

    if(ans == false) {
	cout<<-1<<endl;
    }

    return 0;
}

