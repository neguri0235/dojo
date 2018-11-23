#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int n,t;
long a[500001];
long c;

int main()
{
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%ld",&a[i]);
    }

    sort(begin(a), begin(a)+n);

    scanf("%d",&t);

    for(int i = 0; i<t; i++){
        scanf("%ld",&c);

        auto r = find(begin(a),begin(a)+n,c);
        if(r != begin(a)+n) printf("1 ");
        else printf("0 ");
    }


    return 0;
}

