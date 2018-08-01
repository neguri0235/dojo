#include <iostream>
#include <cstdio>


#define DBG 0

int E,S,M,sol;


void input();
void solve();


int main()
{

    input();
    solve();
    std::cout<<sol<<std::endl;

    return 0;
}


void input()
{
    std::cin>>E>>S>>M;
}

void solve()
{

    int e = 1;
    int s = 1;
    int m = 1;

    while(1){
        sol++;

        if(e == E && s ==S && m == M) {
            if(DBG) std::cout<<"FIND: ";
            return;
        }


        e++; if(e > 15) e = 1;
        s++; if(s > 28) s = 1;
        m++; if(m > 19) m = 1;
    }
}:
