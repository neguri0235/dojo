#include <iostream>
#include <cstdio>

using namespace std;

long long n;
long long m;
long long p;
long long d[100000];



long long  low(long long  end, long long  n)
{
    long long start = 0;

    while(start < end) {

        long long  mid = (start + end) /2;

        if(d[mid] >= n) end = mid;
        else start = mid+1;

    }

    return end;

}

int main()
{
    long long k;
    long long l = 0;
    std::cin>>n;
    cin>>k;
    d[0] = k;

    for(long long i = 1; i<n; i++) {
        cin>>k;

        if(k > d[l]) {
            d[++l] = k;
        }else{
           p =  low(l, k);
           d[p] = k;
        }

    }

    cout<<l+1<<endl;
    return 0;
}
