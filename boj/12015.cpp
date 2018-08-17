#include <iostream>
#include <cstdio>

using namespace std;

int n;
int m;
int p;
int a[1000001];
int d[1000001];


int lower_bound( int t,int l )
{

    int s = 0;
    int e = l-1;

    while( s < e) {

        m = (s + e)/2;

        if( d[m] < t) {
            s = m+1;
        }else{
            e = m;
        }
    }

    return e;
}

int low(int end, int n)
{
    int start = 0;

    while(start < end) {

        int mid = (start + end) /2;

        if(d[mid] >= n) end = mid;
        else start = mid+1;

    }

    return end;

}

int main()
{
    std::cin>>n;


    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }
    
    d[0] = a[0];
    int l = 0;

    for(int i = 1; i<n; i++){

        if(a[i] > d[l]) {
            d[++l] = a[i];
        }else{
           p =  low(l, a[i]);
           d[p] = a[i];
        }
    }

    cout<<l+1<<endl;
    return 0;
}
