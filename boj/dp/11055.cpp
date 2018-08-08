#include <iostream>

int n;
int d[1001];
int a[1001];

int main()
{
    std::cin>>n; 
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }


    for(int i = 0; i<n; i++) {
        if(d[i] == 0) d[i] = 1;

        for(int j =0; j<i; j++){
            if(a[i] > a[j])  {
                if(d[i] < d[j]+1)
                    d[i] = d[j]+1;
            }
        }
    }
    int p = -1;
    int s = 0; 

    for(int i = 0; i<n; i++){
        if(d[i] > p) {
            s+=a[i];
            p = d[i];
            std::cout<<a[i]<<" ";
        }
    }

    std::cout<<std::endl;

    std::cout<<s<<std::endl;

    return 0;
}
