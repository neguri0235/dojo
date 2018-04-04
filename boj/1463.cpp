//www.acmicpc.net/problem/1463

#include <iostream>
#include <queue>
#include <vector>
#include <ctime>
#include <cstdlib>

#define DBG 0

int n;
int sol;

void solve();

int main()
{
    std::cin>>n;
    int start = clock();

    solve();
    std::cout<<sol<<std::endl;
    if(DBG) std::cout<<(double)(clock()-start)/CLOCKS_PER_SEC<<std::endl;

    return 0;
}

void solve()
{
    std::vector<int> v(n);
    
    std::queue<int>sq;         //small queue
    std::queue<std::queue<int>>lq; //large queue

    sq.push(n);
    lq.push(sq);

    while(lq.empty()==false) {
        auto ld = lq.front(); lq.pop(); //large data
        size_t sz = ld.size();

        while(sz--) {

            auto sd = ld.front(); ld.pop(); //small data

            if(sd == 1) return;

            if(v[sd-1] == 0) {
                v[sd-1] = 1; ld.push(sd-1);
            }

            if(v[sd/3] == 0 && sd%3 == 0) {
                v[sd/3] = 1; ld.push(sd/3);
            }

            if(v[sd/2] == 0 && sd%2 == 0) {
                v[sd/2] = 1; ld.push(sd/2);
            }

        }
        lq.push(ld);
        sol++;
    }
}

