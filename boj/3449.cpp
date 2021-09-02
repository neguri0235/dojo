#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int tc, ans;
    string a, b;
    cin>>tc;
    while(tc--){
	cin>>a;
	cin>>b;
	ans = 0;
	for(int i = 0; i<(int)a.size(); i++){

	    if(a[i] == b[i]) continue;
	    ans +=1;
	}
	cout<<"Hamming distance is "<<ans<<'.'<<'\n';
    }
    return 0;
}
