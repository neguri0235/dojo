#include <iostream>

int d[1000001];

int main()
{
    int n,a;

    std::cin>>n;
    std::cin>>a;

    int cur_max = a;
    int far_max = a;

    for(int i = 1; i<n; i++){
        std::cin>>a;
        cur_max = cur_max + a > a ? cur_max+ a : a;
        far_max = far_max > cur_max ? far_max  : cur_max;
    }
    
    std::cout<<far_max<<std::endl;

    return 0;
}
