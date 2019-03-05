#include <iostream>

using namespace std;

int main()
{
    int h,m;
    cin>>h>>m;
    if(m >=45) {
        m -= 45;
    }else{

        h -= 1;
        m += 15 ;
    }

    if(h == -1) h = 23;
    cout<<h<<' '<<m<<'\n';
    return 0;
}
