#include <iostream>
#include <vector>

using namespace std;


#define NEA 1
#define EA  2



vector<int> v[1000002];
int d[1000002][2],a,b,ans,n;

int go(int p, int c, int k)
{

    int &ret = d[c][k];
    if(ret != 0) return ret;

    for(int i = 0; i<v[c].size(); i++) {
        int next = v[c][i];

        if(next == p) continue;

        if(k == 1 ) {
            ret +=min(go(c,next,0), go(c,next,1)+1);
        }else {
            ret += go(c,next,1)+1;
        }
    }

    return ret;

}

int main()
{
    ios_base::sync_with_stdio(false);

    cin>>n;
    for(int i = 0; i<n-1; i++) {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    ans = min(go(-1,1,0), go(-1,1,1)+1);
    cout<<ans<<'\n';

    return 0;
}



