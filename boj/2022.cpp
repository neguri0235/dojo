#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x,y,c,ans;
    cin>>x>>y>>c;

    double left, right, mid,h1,h2;

    left = 0; 
    right = min(x,y);
    while( abs(left - right ) > 1e-6){
        mid = (left+right)/2.0;
        h1 = sqrt(x*x - mid*mid);
        h2 = sqrt(y*y - mid*mid);

        double k = (h1*h2)/(h1+h2);

        if(k > c) {
            left = mid;
        }else{
            right = mid;
        }
    }

    printf("%.3f\n",mid);

    return 0;
}