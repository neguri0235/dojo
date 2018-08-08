#include <iostream>

int a[] = {10,20,40,25,20,50,30,70,85};

int d[100];

int main()
{

    int n = sizeof(a)/sizeof(int);

    for(int i = 0; i<n; i++){

        if(d[i] == 0) d[i] = 1;

        for(int j = 0; j<i; j++){
            if(a[i] > a[j]) {
                if(d[i] < d[j] +1)
                    d[i] = d[j]+1;
            }
        }
    }


    for(int i = 0; i<n; i++)
        std::cout<<a[i]<<" "; std::cout<<std::endl;

    for(int i = 0; i<n; i++)
        std::cout<<d[i]<<"  "; std::cout<<std::endl;


    int p = -1;

    for(int i = 0; i<n; i++) {

        if(d[i] > p) {
            std::cout<<a[i]<<" ";
            p = d[i];
        }
    }

    std::cout<<std::endl;

    return 0;
}
