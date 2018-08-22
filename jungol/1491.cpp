#include <iostream>
#include <vector>

using namespace std;

int L;
int n;
int a[102];
int t[102];

int d[102];
int r[102];

int cnt;
int idx;

void print(int i)
{
    if(i == 0){
        cout<<cnt<<endl;
        return ;
    }

    cnt = cnt+1;
    print(r[i]);
    cout<<i<<" ";
}


int main()
{
    cin>>L;
    cin>>n;
    for(int i = 1; i<=n+1; i++){int z;  cin>>z; a[i] = z + a[i-1];}
    for(int i = 1; i<=n; i++) cin>>t[i];

    for(int i = 1; i<102; i++) d[i] = 987654;

    d[0] = 0;


    for(int i = 1; i<=n+1; i++) {
        for(int j = i-1; j >=0; j--){

            if(a[i] - a[j] <= L) {
                if(d[j] + t[i] < d[i]){
                    d[i] = d[j] + t[i];
                    r[i] = j;
                    idx = j;
                }
            }
        }
    }

    cout<<d[n+1]<<endl;

#define DBG 0

    int pr = -1;

#if DBG
    
    for(int i = 0; i<=n+1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<n+1; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;


#endif

    print(idx);


    return 0;
}
