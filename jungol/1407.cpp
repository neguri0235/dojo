#include <iostream>
#include <string>

using namespace std;

string str;
int n;
int a[41];
int d[41];

int main()
{
    cin>>str;
    n = str.size();

    for(int i = 0; i<str.size();i++){
        a[i+1] = str[i] - '0';
    }


    if(a[1] == 0) d[n] = 0;
    else{
        d[0] = 1;
        d[1] = 1;
        for(int i = 2; i<=n; i++) {
            if(a[i] != 0) d[i] += d[i-1];

            int temp = a[i-1]*10 + a[i];
            if( temp >= 10 && temp <=34) 
                d[i] += d[i-2];
        }
    }

    cout<<d[n]<<endl;

    return 0;
}
