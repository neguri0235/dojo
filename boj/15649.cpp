#include <iostream>


int n,m,sz;
int a[10];
int v[10];

void go()
{
    if(sz == m) {
        for(int i = 0; i<m; i++) {
            std::cout<<a[i]<<" ";
        }
        std::cout<<'\n';
        return;
    }

    for(int i = 0; i<n; i++) {

        if(v[i] == 1) continue;

        v[i] = 1;
        a[sz++] = i+1;
        go();
        v[i] = 0;
        a[sz--] = 0;
    }
}

int main()
{
    std::cin>>n>>m;

    go();

    return 0;
}
