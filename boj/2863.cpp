#include <iostream>

using namespace std;

double a[4];
double b[4];
double _max;
int idx;

int main()
{
    for(int i = 0; i<4; i++) {
        cin>>a[i];
    }

    b[0] = a[0]/a[2] + a[1]/a[3];
    b[1] = a[2]/a[3] + a[0]/a[1];
    b[2] = a[3]/a[1] + a[2]/a[0];
    b[3] = a[1]/a[0] + a[3]/a[2];
    
    for(int i = 0; i<4; i++) {
        if(b[i] > _max) {
            _max = b[i];
            idx = i;
        }
    }
    cout<<idx<<'\n';
    return 0;
}
