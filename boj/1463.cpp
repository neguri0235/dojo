//dp. top-down 방식으로 

#include <iostream>

int n;
int d[1000001];



int f(int a)
{


    if(a == 1) return 0;

    if(d[a] > 0) return d[a];

    d[a] = f(a-1) +1;

    // 0 1 2 3 4 5 6 7 8 9 

    if(a%2 == 0) {
    //    std::cout<<"DBG: "<<a<<std::endl;
        d[a] = std::min(f(a/2)+1, d[a]);
    }

    // 0 1 2 2 3 3 4 3 4 4 


    if(a%3 == 0) {
        d[a] = std::min(f(a/3)+1, d[a]);
    }

    // 0 1 1 2 3 2 3 3 2 3

    return d[a];


}


int main()
{

    std::cin>>n;

  
    std::cout<<f(n)<<std::endl;

    for(int i = 0; i<11; i++) {

        std::cout<<d[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
