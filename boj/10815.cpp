#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int n,t;
long a[500001];
long c;

int go(long f)
{

    int s = 0;
    int e = n;
    int m = (s+n)/2;

    while( s < e ) {

       // cout<<s<<" "<<e<<" "<<m<<endl;

        if(a[m] == f) return 1;
        
        if( a[m] > f) {
            e = m;
        }else {
            s = m+1;
        }
        m = (s+e)/2;
    }

    return 0;

}

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
        /*

        auto r = find(begin(a),begin(a)+n,c);
        if(r != begin(a)+n) printf("1 ");
        else printf("0 ");
        */
        printf("%d ",go(c));
    }


    return 0;
}

