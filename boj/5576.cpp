#include <iostream>
#include <algorithm>

using namespace std;

int a[10],b[10];


int main()
{

    for(int i = 0; i<10; i++) {
        cin>>a[i];
    }

    for(int i = 0; i<10; i++) {
        cin>>b[i];
    }

    sort(begin(a),begin(a)+10);
    sort(begin(b),begin(b)+10);

    cout<<(a[7]+a[8]+a[9])<<' ';
    cout<<(b[7]+b[8]+b[9])<<endl;

    return 0;
    
}


