#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int b = 5*a - 400;
    cout<<b<<endl;

    if(b > 100) {
        cout<<-1<<endl;
    }else if(b == 100){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
    }
    return 0;
}
