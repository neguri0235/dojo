#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int tc,a,b,c,d,e;
double ans;
vector<double> v = {350.34, 230.90, 190.55, 125.30, 180.90};

int main()
{
    cin>>tc;
    while(tc--){
        cin>>a>>b>>c>>d>>e;
        ans += v[0]*a + v[1]*b + v[2]*c + v[3]*d + v[4]*e;
        cout<<fixed;
        cout<<setprecision(2);
        cout<<"$"<<(float)ans<<endl;
    }
    return 0;
}
