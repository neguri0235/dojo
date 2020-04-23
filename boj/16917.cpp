#include <iostream>
#include <string>

using namespace std;

int A,B,C,X,Y,ans;

int main()
{
    int type = 0;

    cin>>A>>B>>C>>X>>Y;

    if((A+B) > C*2) {
        type = 0;
    }else{
        type = 1;
    }

    int XT = 0;
    int YT = 0;

    if(type == 0){

        while(X != XT && Y != YT){

            XT += 1;
            YT += 1;
            ans += (C*2);
        }

        ans += (X-XT)*A;
        ans += (Y-YT)*B;
    }else{
        ans += A*X;
        ans += B*Y;
    }
    cout<<ans<<endl;
    return 0;
}
