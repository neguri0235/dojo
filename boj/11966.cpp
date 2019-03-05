#include <iostream>

using namespace std;

int main()
{
    unsigned long long a;
    int cnt = 0;

    cin>>a;

    for(int i= 0; i<32; i++) {

        if(a & 1 == 1) {
            cnt++;
        }
        a = a>>1;

    }

    if(cnt >1) cout<<0<<endl;
    else cout<<1<<endl;

    return 0;
}
