#include <iostream>
using namespace std;

long long a,b,c,d;
int main()
{
    while(1){
        cin>>a>>b>>c;

        if(a == 0 && b == 0 && c == 0) break;

        a = a*a;
        b = b*b;
        c = c*c;

        if((a+b) == c) {
            cout<<"right"<<endl;
        }else if( (a+c) == b) {
            cout<<"right"<<endl;
        }else if( (b+c) == a) {
            cout<<"right"<<endl;
        }
        else cout<<"wrong"<<endl;
    }
    return 0;
}
