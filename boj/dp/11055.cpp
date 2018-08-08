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
