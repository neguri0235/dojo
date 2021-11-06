#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int tc;
    cin>>tc;
    while(tc--){
        int f, t;
        scanf("%d %d",&f, &t);
        long long int dist = t - f;
        long long int i = 1;
        while(true){
            if(dist <= i*i){
                printf("%lld\n",i*2-1);
                break;
            }else if(dist <= i*i + i){
                printf("%lld\n",i*2);
                break;
            }
            i++;
        }
    }
    return 0;
}