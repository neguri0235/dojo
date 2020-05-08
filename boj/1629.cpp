#include <iostream>
using namespace std;

unsigned long long A,B,C;


unsigned long long go(unsigned long a, unsigned long b, unsigned long c)
{
    if(b == 0){
        return 1;
    }else if(b == 1){
        return a;
    }else if(b % 2 == 0){
        unsigned long long r = go(a,b/2,c);
        return r*r%c;
    }else{
       return (a * go(a,b-1,c))%c;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    cin>>A>>B>>C;

    unsigned r = go(A,B,C);
    cout<<r<<'\n';

    return 0;
}


