#include <iostream>

using namespace std;

string s;

long long num,sum,a;
int main()
{
    cin>>s;
    for(int i = 0; i<s.size(); ++i ) {

        if(s[i] != ',') {
            a = s[i] - '0';
            num *= 10;
            num += a;
        }else  {
            sum += num;
            num = 0;
        }
    }

    sum += num;

    cout<<sum<<endl;
    return 0;
}
