#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
typedef long L;

void go(vector<L>&, stack<L>&, L,L);

int  main()
{
    L from,to;
    cin>>from>>to;
    vector<L>v(to*2+1);
    queue<L>q;

    q.push(from);
    v[from] = from;
    if(from == 0) v[from] = -1;
    while(!q.empty()){
	auto r = q.front(); q.pop();
	if(r == to){
#ifdef DBG
	    cout<<"FIND"<<'\n';
#endif
	    break;
	}

	if(r-1 >= 0){
	    if( !v[r-1]){
	    v[r-1] = r;
	    q.push(r-1);
	    }
	}

	if(!v[r+1]){
	    v[r+1] = r;
	    q.push(r+1);
	}

	if(r*2 <= to*2+1){
	    if(!v[r*2]){
		v[r*2] = r;
		q.push(r*2);
	    }
	}
    }

#ifdef DBG
    for(auto e : v) cout<<e<<' ';
    cout<<endl;
#endif
    stack<L> p;
    p.push(to);
    go(v,p,from,to);
    cout<<p.size()-1<<'\n';
    while(!p.empty()){
	cout<<p.top()<<' '; p.pop();
    }cout<<'\n';
    return 0;
}
void go(vector<L>&v, stack<L>&p, L  from, L  next)
{
   if(next == from){
       return ;
   } 

   p.push(v[next]);
   go(v,p,from,v[next]);
}
