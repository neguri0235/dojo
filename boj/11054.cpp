#include <iostream>

int n;
int a[1001];
int b[1001];
int d[1001];

int main()
{
    std::cin>>n;
    int max,min;
    max = min = 1;
    int max_p;

    for(int i = 0; i<n; i++){
        std::cin>>a[i];
        d[i] = 1;
        b[i] = 1;
    }


    for(int i = 1; i<n; i++){
       for(int j=0; j<i; j++){
            if(a[i] > a[j] && d[i] < d[j]+1 ){
                d[i] = d[j]+1;
                if(max < d[i]){
                    max = d[i];
                }
            }
        }
    }

    for(int i = n-1; i>=0; i--){
       for(int j= n-1; j>i; j--){
            if(a[i] > a[j] && b[i] < b[j]+1 ){
                b[i] = b[j]+1;
                if(min < b[i]) min = b[i];
            }
        }
    }

    int lmax = 0;
    for(int i = 0; i<n; i++){
        lmax = std::max(lmax, d[i] + b[i] -1);
    }
    std::cout<<lmax<<std::endl;
        
    return 0;
}
