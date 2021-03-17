#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int h1,h2,m1,m2,s1,s2,tc = 3;
    int h,m,s;

    while(tc--){
	cin>>h1>>m1>>s1>>h2>>m2>>s2;

	s = s2 - s1;
	if(s < 0) {
	    s += 60;
	    m1 += 1;
	}

	m = m2 - m1;
	if(m < 0) {
	    m += 60;
	    h1 += 1;
	}

	h = h2 -h1;
	
	cout<<h<<' '<<m<<' '<<s<<endl;

    }

    return 0;
}
