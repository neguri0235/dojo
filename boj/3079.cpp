#include <iostream>


long long ans,n,m,start,end,_max;
int a[100001];


int calc(long long p)
{
    long long sum = 0;

    for(long i = 0; i<n; i++) {
        sum += p / a[i];
    }

    if(sum >= m) return 1;
    else return 0;

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin>>n>>m;

    for(long long i = 0; i<n; i++) {
        std::cin>>a[i];
        _max = std::max(static_cast<long long>(a[i]),_max);
    }
    end = _max*m;

    while(start < end) {

        long long  mid = (start+end)/2;
       // std::cout<<"DBG: "<<mid<<'\n';

        if( calc(mid) ) {
            end = mid;
        }else{
            start = mid+1;
        }
    }

    ans = end;

    std::cout<<ans<<'\n';


    return 0;
}
