#include <iostream>

using namespace std;

int L,n,a[102],t[102],d[102],p[102],o,last,cnt;

void print(int i)
{
    //cout<<"D: "<<i<<" "<<p[i]<<endl;
    if( i == 0){
        cout<<cnt<<endl;
        return;
    }

    cnt++;

    print(p[i]);
    cout<<i<<" ";
}

int main()
{
    cin>>L;
    cin>>n;

    for(int i= 1; i<=n+1; i++){
        cin>>o;
        a[i] = a[i-1] + o;
        d[i] = 987654321;
    }

    for(int i = 1; i<=n;i++){
        cin>>t[i];
    }

    d[0] = 0;
    for(int i = 1; i<=n+1; i++) {
        for(int j = i-1; j >= 0; j--) {
            
            if(a[i] - a[j] <= L) {
                if(d[j] + t[i] < d[i] ){
                    d[i] = d[j] + t[i];
                    p[i] = j;
                    last = j;
                }
            }
        }
    }

    cout<<d[n+1]<<endl;

    if(d[n+1] == 0) return 0;

    //for(int i = 1; i<=n+1; i++) cout<<p[i]<<" ";
    //cout<<endl;

    //cout<<"last: "<<last<<endl;
    print(last);
    
    return 0;
}

