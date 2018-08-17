#include <iostream>
#include <cstdio>

using namespace std;

int n;
int a[100000];
int d[100000];

int lower_bound(int end, int t)
{

    int mid = 0;
    int start = 0;

    while(start < end) {

        mid  = (start + end) /2;

        if(d[mid] < t) start = mid + 1;
        else end = mid; 
    }

    return end;
}


int main()
{

    cin>>n;

    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int idx = 0;
    d[idx] = a[0];

    
    for(int i = 1; i<n; i++) {

        if(d[idx] < a[i]) {
            d[++idx] = a[i];
        }else{
            int np = lower_bound(idx,a[i]);
            d[np] = a[i];
        }

    }

    cout<< n - idx - 1<<endl;
    //cout<< idx + 1<<endl;

    return 0;
}
