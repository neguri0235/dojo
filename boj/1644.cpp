#include <iostream>

using namespace std;


int d[4000001];
int p[4000001];

int n,k,sum,ans,L,F;

void getPrime()
{
    d[0] = d[1] = 1;

    for(int i = 2; i*i <=4000000; i++) {
        for(int j = i+i; j <=n; j+=i) {
            if(d[j] == 0)
                d[j] = 1;  
        }
    }

    for(int i = 2; i<=4000000; i++) {
        if(d[i] == 0){
            p[k++] = i;
        }
    }

    /*(
    for(int i = 0; i<k; i++) {
        cout<<p[i]<<' ';
    }
    cout<<'\n';
    */
}


int go()
{
    int head,tail;
    int cnt = 0;
    tail = head = 0;
    int pn = k;
    sum = 2;

    while(tail <= head && head <pn) {

        if(n > sum) {
            sum += p[++head];
        }else if(n < sum) {
            sum -= p[tail++];
        }else
        {
            cnt++;
            sum -= p[tail++];
        }

    }

    return cnt;
}


int main()
{
    cin>>n;

    getPrime();

    if(d[n] == 0){
        ans++;
    }


    while(1) {


        if(p[L] > n){
            //cout<<p[F]<<" break"<<endl;
            break;
        }

        if(sum == n ) {
           // cout<<"sum!!!:"<<sum<<" "<<p[F]<<" to "<<p[L-1]<<endl;
           // cout<<F<<" - "<<L<<endl;
            ans++;
            sum +=p[L];
        }

        if(sum < n) {
            sum += p[L];
            //cout<<"sum<n,"<<" +="<<p[L]<<" "<<sum<<endl;
            L++;
        }

        if(sum > n) {
            //sum -= p[L];
            sum -= p[F];
            F++;
            //cout<<"sum>n,"<<" -="<<p[L]<<" "<<p[F]<<" "<<sum<<endl;
        }
    }

    cout<<ans<<'\n';

    cout<<go()<<'\n';
    return 0;
}
