#include <iostream>
#include <vector>
#include <utility>
#include <stdlib.h>
#include <string.h>

using namespace std;

int tc,n,m,a,b;

bool areFriends[10][10];
bool taken[10];

int countPairings2(bool taken[10])
{
    bool finished = true;
    for(int i = 0; i<n; i++){ 
        if(!taken[i]) finished = false;
    }
    if(finished) return 1;
    int ret = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(!taken[i] && !taken[j] && areFriends[i][j]) {
                taken[i] = taken[j] = true;
                ret += countPairings2(taken);
                taken[i] = taken[j] = false;
            }
        }
    }
    return ret;
}

int countPairings(bool taken[10])
{
    int firstFree = -1;
    for(int i = 0; i<n; i++){
        if(!taken[i]) {
            firstFree = i; 
            break;
        }
    }

    if(firstFree == -1) return 1;
    int ret = 0;
    for(int pairWith = firstFree+1; pairWith < n; ++pairWith){
        if(!taken[pairWith] && areFriends[firstFree][pairWith]){
            taken[firstFree] = taken[pairWith] = true;
            ret += countPairings(taken);
            taken[firstFree] = taken[pairWith] = false;
        }
    }
    return ret;
}

int main()
{
    cin>>tc;
    while(tc--){
        cin>>n>>m;
        memset(taken,0,sizeof(taken));
        memset(areFriends,0,sizeof(areFriends));
        for(int i = 0; i<m; i++){
            cin>>a>>b;
            areFriends[a][b] = areFriends[b][a] = true;
        }
        #ifdef CB
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cout<<areFriends[i][j]<<' ';
            }cout<<endl;
        }
        #endif
        cout<<countPairings(taken)<<endl;
    }
}