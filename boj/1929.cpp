#include <iostream>
#include <cstdio>

#define MAX 1000000


using namespace std;


using ul = unsigned long;

ul from,to;
ul map[MAX];
void solve();
void print();


int main()
{

    cin>>from>>to;

    solve();

    return 0;

}



void solve()
{
    map[0]=map[1] = 1;

    for(ul i = 2; i<=to; i++) {
        if(map[i] == 1) continue;
 
        for(ul j = i+i; j<=to; j +=i)
            map[j] = 1;
    }
    
    print();
}


void print()
{

    for(ul i = from; i<=to ; i++) {
        if(map[i] == 0)
            printf("%ld\n",i);
    }

}
