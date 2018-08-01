//http://codeforces.com/contest/158/problem/B

#include <iostream>
#include <cstdio>

int n;
int v1,v2,v3,v4;

void input();
int solve();

int main()
{
    input();
    printf("%d\n",solve());
    return 0;
}

void input()
{
    int a;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%d",&a);
        if(a == 4) v4++;
        if(a == 3) v3++;
        if(a == 2) v2++;
        if(a == 1) v1++;
    }
}

int solve()
{
    int sol = v4; v4 = 0;
    sol += v2/2; v2 = v2%2;

    if(v1>v3) {
        sol += v3; v1 = v1-v3; v3 = 0;
    }else if(v1 < v3){
        sol += v1;
        v3 = v3-v1; v1 = 0;
    }else if(v1 == v3) {
        sol += v1; v1=v3=0;
    }

    if(v2 == 1 && v1 >=2) {
        sol+=1; v2 = 0; v1 = v1-2;
    }else if(v2 == 1 && v1 >=1) {
        sol+=1; v2 = v1 = 0;
    }

    if(v1 > 4) {
        sol += v1/4; v1 = v1%4;
    }
    if(v1 > 0 ) sol+=1;
    sol +=v2;
    sol +=v3;
    return sol;
}
