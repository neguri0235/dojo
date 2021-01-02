#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int a1,p1,a,b,n;

int main()
{
    ios_base::sync_with_stdio(false);

    cin>>a1>>p1;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        v[i] = make_pair(a,b);
    }

    double c1 = a1*1000/p1 + a*1000%p1;

    vector<double> r;

    for(auto e : v) {
        a = e.first;
        b = e.second;
        double q = a*1000/b + a*1000%b;
        r.push_back(q);
    }

    double ans = c1;
    for(auto e : r) {
        ans = min(ans,e);
    }
    printf("%.2f\n",ans);

    return 0;
}