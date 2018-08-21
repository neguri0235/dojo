#include <iostream>

using namespace std;

int tc;
int n;

long long d[105] = {0,1,1,1,2,2,3,4,5,7,9};
long long b[105] = {0,1,1,1,2,2,3,4,5,7,9};


int main()
{
    cin>>tc;

    /*
    for(int i = 11; i<101; i++){
        d[i] = d[i-1] + d[i-5];
    }
    */

    for(int i = 11; i<101; i++){
        b[i] = b[i-2] + b[i-3];
    }

    while(tc--){

        cin>>n;
        cout<<b[n]<<endl;
    }
    return 0;
}
