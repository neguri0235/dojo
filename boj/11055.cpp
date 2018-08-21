#include <iostream>

int n;
int max;
int a[1001];
int d[1001];


int main()
{
    std::cin>>n;
    for(int i = 0; i<n; i++){
        std::cin>>a[i];
        d[i] = a[i];
    }

    
    max = a[0];

    for(int i = 1; i<n; i++){

        for(int j = 0; j<i; j++){

            if(a[i] > a[j] && (d[i] < d[j] + a[i])){
                d[i] = d[j] + a[i];
                if(d[i] > max) max = d[i];
            }
        }
    }

    std::cout<<max<<std::endl;

    return 0;
}




#if 0
#include <iostream>

int n;
int d[1001];
int a[1001];

int main()
{
    std::cin>>n; 


    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
        d[i] = a[i];
    }
   
    int s = a[0];

    for(int i = 0; i<n; i++) {

        for(int j =0; j<i; j++){
            if(a[i] > a[j])  {
                if(d[i] < d[j]+ a[i])
                    d[i] = d[j]+a[i];
                if(s < d[i]) s = d[i];
            }
        }
    }



    std::cout<<s<<std::endl;

    return 0;
}
#endif
