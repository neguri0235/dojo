#include <iostream>
#include <string>

using namespace std;

string str;
int a[42];
int d[42];
int n;

int main()
{
    cin>>str;
    n = str.size();

    for(int i = 0; i<n; i++) a[i+1] = str[i] - '0';

    if(a[1] == 0) {
        cout<<'0'<<endl;
        return 0;
    }       

    d[0] = d[1] = 1;

    for(int i = 2;  i<=n; i++){

        if(a[i] != 0) {
            d[i] = d[i-1];
        }

        int temp = a[i-1] * 10 + a[i];
        if(temp >= 10 && temp <= 34) {
            d[i] += d[i-2];
        }

    }


    cout<<d[n]<<endl;

   // for(int i = 0; i<= n; i++) cout<<d[i]<<" ";
   // cout<<endl;

    return 0;
}

