#include <iostream>

using namespace std;

int n;
int a[1001];
int d[1001];

int lowerBound(int i, int end)
{
    int start = 0;
    int mid;

    while( start < end) {
        mid = (start+end)/2;

        if(d[mid] < i) start = mid + 1;
        else end = mid;
    }

    return end;

}

int main()
{
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>a[i];
        d[i] = 0;
    }

    int ii = 0;

    d[0] = a[0];

    for(int i = 1; i<n; i++){

        if(d[ii] < a[i]) d[++ii] = a[i];
        else{

           int ni =  lowerBound(a[i],ii);
           d[ni] = a[i];
        }

    }

    cout<<ii+1<<endl;

    return 0;
}




#if 0

#include <iostream>
#include <cstdio>

using namespace std;

int n;
int d[1001];
int a[1001];


int main()
{
    std::cin>>n;

    for(int i = 0; i<n; i++) {
        scanf("%d",&a[i]);
        d[i] = 1;
    }

    int m = 1;

    for(int i = 1; i<n; i++){

        for(int j = 0; j<i; j++){


            if(a[i] > a[j] && (d[i] < d[j]+1)) {

                d[i] = d[j]+1;
                if(d[i] > m) m = d[i];
            }
        }
    }

    cout<<m<<endl;

    return 0;
}

#ifdef L1 


int a[1001];
int d[1001];
int n;

int main()
{
    std::cin>>n;
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i<n; i++){
        if(d[i] == 0) d[i] = 1;
        for(int j = 0; j<i; j++){
            if(a[i] > a[j]) {
                if(d[i] < d[j] + 1)
                    d[i] = d[j] +1;
            }
        }
    }

    int p = -1;
    int c = 0;
    for(int i = 0; i<n; i++){
        if(d[i] > p) {
            p = d[i];
            c++;
        }
    }

    std::cout<<c<<std::endl;
    


    return 0;
}

#endif
#endif
