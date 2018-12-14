#include <iostream>

using namespace std;

long long n,t;
int f,ans;
string s;
int main()
{
    cin>>n;
    cin>>f;


    n = n -(n%100);

    for(int i = 0; i<=99; i++) {

       t =  n + i;
       if(t%f == 0){
           ans = i;
           break;
       }
    }


    if(ans <= 9) {
        s.push_back('0');
        s.push_back(ans+'0');
    }else{
        s.push_back(ans/10+'0');
        s.push_back(ans%10+'0');
    }
    cout<<s<<'\n';
    return 0;
}
