#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

#ifdef CB
freopen("in.txt","r",stdin);
#endif

    int a, b, c, x, y;


    int pay = 0;
    cin>>a>>b>>c>>x>>y;

    if(c*2 > (a+b)){
        pay += a*x;
        pay += b*y;
    } else{
        int t = min(x,y);
        pay += t*2*c;
        if(c*2 < a ) {
            pay += (x-t)*2*c;
        }else{
            pay += (x-t)*a;
        }

        if(c*2 < b) {
            pay += (y-t)*2*c;
        }else{
            pay += (y-t)*b;
        }
    }
    cout<<pay<<endl;
    return 0;
}