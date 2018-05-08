#include <iostream>


int n;
int sol;

int solve(int);
void calc(int,int);

int main()
{
    int a;
    std::cin>>n;
    for(int i = 0; i<n; i++) {
        sol = 0;
        std::cin>>a;
        std::cout<<solve(a)<<std::endl;
    }

    return 0;
}

int solve(int a)
{
    calc(0,a);
    return sol;
}


void calc(int sum, int target)
{

    if(sum > target) return;

    if(sum == target) {
        sol++;
        return;
    }

    for(int i = 1; i<=3; i++) {
        calc(sum+i, target);
    }
}
