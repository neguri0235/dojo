// 하노이 탑 옮기기

#include <iostream>

using namespace std;


void hanoi(char s, char d, char e, int n)
{
    if(n <= 0) return;

    hanoi(s,e,d,n-1);

    cout<<n<<"번을 "<<s<<" 에서 "<<d<<" 에 옮긴다"<<endl;

    hanoi(e,d,s,n-1);

}


int main()
{
    hanoi('A','B','C',4);
    return 0;
}
