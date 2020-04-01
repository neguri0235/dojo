#include <iostream>
#include <vector>


using namespace std;

//#define __CB__

int N,M,max_;

int go(vector<vector<int>>&, int, int);


int main()
{
    ios_base::sync_with_stdio(false);
#ifdef __CB__
    freopen("14500.txt","r",stdin);
#endif

    cin>>N>>M;
    vector<vector<int>>A(N,vector<int>(M));

    for(int i = 0; i<N; i++) {
        for(int j = 0; j<M; j++) {
            cin>>A[i][j];
        }
    }

#ifdef __CB__
    cout<<N<<' '<<M<<endl;;
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<M; j++) {
            cout<<A[i][j]<<' ';
        }cout<<'\n';
    }
    
#endif

    for(int i = 0; i<N; i++) {
        for(int j = 0; j<M; j++) {
            int temp = go(A,i,j);
            max_ = max(temp,max_);
        }
    }

    cout<<max_<<endl;
    return 0;
}

int go(vector<vector<int>>&v, int y, int x)
{
    int r = 0;
    int t = 0;

    if(x+3 < M) {
        int t = v[y][x] + v[y][x+1] + v[y][x+2] + v[y][x+2];
        r = max(r,t);
    }

    if(y+3 < N) {
        int t = v[y][x] + v[y+1][x] + v[y+2][x] + v[y+3][x];
        r = max(r,t);
    }
//-------
/*
##
##
*/

    if(y+1 < N && x + 1<M) {
        int t = v[y][x] + v[y+1][x+1] + v[y+1][x] + v[y][x+1];
        r = max(r,t);
    }
//------------
/*
#
#
##
*/
    if(y+2 < N && x+ 1< M) {
        int t = v[y][x] + v[y+1][x] + v[y+2][x] + v[y+2][x+1];
        r = max(r,t);
    }

    if(y-1 >= 0 && x+2< M) {
        int t = v[y][x] + v[y][x+1] + v[y][x+2] + v[y-1][x+2];
        r = max(r,t);
    }

    if(y -2 >= 0 && x-1 >=0 ) {
        int t = v[y][x] + v[y-1][x] + v[y-2][x] + v[y-2][x-1];
        r = max(r,t);
    }

    if(y+1 < N && x-2 >= 0) {
        int t = v[y][x] + v[y][x-1] + v[y][x-2] + v[y+1][x-2];
        r = max(r,t);
    }
/*
 #
 #
##
*/
    if(y+2 < N && x-1 >= 0) {
        int t = v[y][x] + v[y+1][x] + v[y+2][x] + v[y+2][x-1];
        r = max(r,t);
    }

    if(y+1 < N && x+2< M) {
        int t = v[y][x] + v[y][x+1] + v[y][x+2] + v[y+1][x+2];
        r = max(r,t);
    }

    if(y-2 >=0 && x+1< M) {
        int t = v[y][x] + v[y-1][x] + v[y-2][x] + v[y-2][x+1];
        r = max(r,t);
    }

    if(y-1 >=0  && x-2 >= 0) {
        int t = v[y][x] + v[y][x-1] + v[y][x-2] + v[y-1][x-2];
        r = max(r,t);
    }
//----------------

/*
#
##
 #
*/

    if(y+2 < N && x+1< M) {
        int t = v[y][x] + v[y+1][x] + v[y+1][x+1] + v[y+2][x+1];
        r = max(r,t);
    }

    if(y-1 >=0 && x+2< M) {
        int t = v[y][x] + v[y][x+1] + v[y-1][x+1] + v[y-1][x+2];
        r = max(r,t);
    }

    if(y-2 >=0 && x-1 >=0 ) {
        int t = v[y][x] + v[y-1][x] + v[y-1][x-1] + v[y-2][x-1];
        r = max(r,t);
    }

    if(y+1 < N && x-2 >=0 ) {
        int t = v[y][x] + v[y][x-1] + v[y+1][x-1] + v[y+1][x-2];
        r = max(r,t);
    }
/*

  #
 ##
 #

*/

    if(y+2 < N && x-1 >= 0 ) {
        int t = v[y][x] + v[y+1][x] + v[y+1][x-1] + v[y+2][x-1];
        r = max(r,t);
    }

    if(y+1 < N && x+2 <M ) {
        int t = v[y][x] + v[y][x+1] + v[y+1][x+1] + v[y+1][x+2];
        r = max(r,t);
    }

    if(y-2 >= 0 && x+1 <M ) {
        int t = v[y][x] + v[y-1][x] + v[y-1][x+1] + v[y-2][x+1];
        r = max(r,t);
    }

    if(y-1 >= 0 && x-2 >=0 ) {
        int t = v[y][x] + v[y][x-1] + v[y-1][x-1] + v[y-1][x-2];
        r = max(r,t);
    }
//-----------------

/*

 #
###

*/
    if(y-1 >= 0  && x+2 <M ) {
        int t = v[y][x] + v[y][x+1] + v[y][x+2] + v[y-1][x+1];
        r = max(r,t);
    }
    
    if(y-2 >= 0  && x-1 >=0 ) {
        int t = v[y][x] + v[y-1][x] + v[y-2][x] + v[y-1][x-1];
        r = max(r,t);
    }

    if(y+1 < N  && x-2 >=0 ) {
        int t = v[y][x] + v[y][x-1] + v[y][x-2] + v[y+1][x-1];
        r = max(r,t);
    }

    if(y+2 < N  && x+2 < M ) {
        int t = v[y][x] + v[y+1][x] + v[y+2][x] + v[y+1][x+1];
        r = max(r,t);
    }
    return r;
}
