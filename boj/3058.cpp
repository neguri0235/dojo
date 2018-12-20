/*
   2
   1 2 3 4 5 6 7
   13 78 39 42 54 93 86
 */
#include <iostream>

using namespace std;

int tc,sum, a, _min;

int main()
{
    cin>>tc;
    _min = 101;
    while(tc--){
        for(int i = 0; i<7; i++) {
            cin>>a;
            if(a%2 == 0) {
                sum += a;
                _min = min(a,_min);
            }
        }
        cout<<sum<<' '<<_min<<'\n';
        sum  = 0;
        _min = 101;
    }

    return 0;
}
