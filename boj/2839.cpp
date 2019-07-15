#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;

    if(!(n%5)) {
        cout<<n/5<<'\n';
        return 0;
    }

    int a = n%5;
    int b = a%3;
    if(b == 0) {
        cout<<(n/5)+(a/3)<<'\n';
        return 0;
    }
    int min_ = 987654321;

    for(int i = 1; i<n; i++) {
        
        if(5*i > n) break;

        int a = n - (5*i);
        int b = 0;
        if(!(a%3)) {
            b = a/3;
            min_ = min(min_,i+b);
        }
    }

    if(min_ != 987654321) {
        cout<<min_<<'\n';
    }else if(! (n%3)){
        cout<<n/3<<'\n';
    }else{
        cout<<-1<<'\n';        
    }
    return 0;
}