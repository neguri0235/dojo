#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, a;


bool even(int a)
{
    return a%3;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;

    vector<int>ve;
    vector<pair<int,int>>vs;
    vector<int>vp;

    for(int i = 0; i<n; i++){
	cin>>a;

	if(even(a)){
	    ve.push_back(a);
	}else{

	    int k = a;
	    int l = a;
	    int s = 0;

	    while(true){

		int t = k;
		s +=1;

		k = t/3;
		l = t%3;

		if(k == 0 && s > 2){
		    vs.push_back({-s,a});
#ifdef DBG
    cout<<"vs: "<<a<<endl;
#endif
		    break;
		}else if(k == 0 && l != 0){
		    vp.push_back(a);
#ifdef DBG
    cout<<"vp: "<<a<<endl;
#endif
		    break;
		}
	    }
	}
    }

    sort(begin(vs),end(vs));

    // 3^2
    for(auto e: vs){
	cout<<e.second<<' ';
    }


#ifdef DBG
    cout<<endl;
#endif
    // a/3
    sort(begin(vp),end(vp));
    for(auto e: vp){
	cout<<e<<' ';
    }

#ifdef DBG
    cout<<endl;
#endif
    // a%3
    sort(begin(ve), end(ve));
    for(auto e: ve){
	cout<<e<<' ';
    }cout<<'\n';
    
    return 0;
}
