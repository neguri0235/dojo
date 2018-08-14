#include <iostream>
#include <cstdio>

long a[80001];
long d[80001];
int n;

long index,in,ans;

void push(long a) { index++; d[index] = a; }
long pop() { long a = d[index]; index--; return a;}
long peek() { long a = d[index]; return a;}

int main()
{
    std::cin>>n;

    for(int i = 0; i<n; i++) {

        scanf("%ld",&in);

        //std::cout<<"D: "<<in;

        while( in >= peek() && index > 0 ){
            pop();

        }
        push(in);
        //std::cout<<" - "<<index<<std::endl;
        ans +=(index -1);

    }

    std::cout<<ans<<std::endl;
    return 0;
}
