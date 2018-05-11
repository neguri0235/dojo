#include <iostream>
#include <vector>


#define DBG 0



int n,sol;

void solve();
void print();
int promising(int);
int solver(int);

std::vector<int> v;

int main()
{
    std::cin>>n;
    v.assign(n+1,0);

    solve();
    return 0;
}

void solve()
{
    solver(0);
    std::cout<<sol<<std::endl;
}

void print()
{
    for(int i = 1; i<=n; ++i)
        std::cout<<v.at(i);
    std::cout<<std::endl;
}

int solver(int i)
{
    if(promising(i) == 1) {
        if(i == n) {
            sol++;
            if(DBG) std::cout<<sol<<std::endl;
            if(DBG) print();
        }else{

            for(int j = 1; j<=n ;j++) {
                v.at(i+1) = j;
                solver(i+1);

            }

        }
    }else{

    }
}

int promising(int i)
{
    int bswitch= 1;
    int k = 1;
    while( k < i && bswitch == 1) {

        if(v[i] == v[k] || (abs(v[i] - v[k]) == i-k)) {
            bswitch= 0;
        }
        k++;
    }
    return bswitch;
}
