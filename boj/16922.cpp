#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int n,ans;
int a[20*50+2];
int v[4] = {1, 5, 10, 50};

void go(int,int,int);

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;
	ans = 0;
	memset(a,0,sizeof(a));
	go(0,0,0);

	for(int i = 1; i<50*20+1; i++){
		if(a[i]) ans += 1;
	}
	cout<<ans<<endl;
    return 0;
}

void go(int pos, int bound, int val)
{
	if(pos ==n){
#ifdef CB
cout<<val<<endl;
#endif
		a[val] = 1;
		return;
	} else{
		for(int i = bound; i<4; i++){
			go(pos+1, i, val+v[i]);
		}
	}

}