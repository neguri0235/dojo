#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main()
{
#ifdef DBG
    freopen("2056.txt","r",stdin);
#endif
    ios_base::sync_with_stdio(false);

    int N,w,n,a;

    cin>>N;

    vector<int>ind(N+2,0);
    vector<int>W(N+2,0);
    vector<int>weight(N+2,0);
    vector<vector<int>>A(N+2);

    for(int i = 1; i<=N; i++){
        cin>>w>>n;

        W[i] = w;
        ind[i] = n;
        for(int k=0; k<n; k++){
            cin>>a;
            A[i].push_back(a);
        }
    }


#ifdef DBG
    for(auto e : W) cout<<e<<' ';
    cout<<'\n';
    for(auto e : ind) cout<<e<<' ';
    cout<<'\n';
    for(auto e : A){
        for(auto ee : e){
            cout<<ee<<' ';
        }
        cout<<'\n';
    }
#endif


    queue<int> q;

    for(int i = 1; i<=N; i++){

        if(!ind[i]) q.push(i);
    }


    while(!q.empty()){

        int node = q.front(); q.pop();

        for(auto e : A[node]){

            ind[e] -= 1;
            if(!ind[e]) q.push(e);

            weight[node] = max(weight[node], weight[node] + W[e]);
        }
    }

    int ans = 0;
    for(int i = 1; i<=N; i++){
        ans = max(ans,weight[i]);
    }
    cout<<ans<<'\n';

    return 0;
}
/*
7
5 0
1 1 1
3 1 2
6 1 1
1 2 2 4
8 2 2 4
4 3 3 5 6
*/
