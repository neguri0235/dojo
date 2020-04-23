#include <iostream>
#include <vector>

using namespace std;


char A[102][102];
char B[102][102];

int N, r, q;
string s;

void dfsr(int,int,char);
void dfsq(int,int,char);

int main()
{
#ifdef DBG
    freopen("10026.txt","r",stdin);
#endif

    cin>>N;
    for(int i = 0; i<N; i++){
        cin>>s;
        for(int j = 0; j<N; j++){
            A[i][j] = s[j];
            if(s[j] == 'R' ) s[j] = 'G';
            B[i][j] = s[j];
        }
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(A[i][j] != 'x'){
                dfsr(i,j,A[i][j]);
                r+=1;
            }
        }
    }

    cout<<r<<' ';

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(B[i][j] != 'x'){
                dfsq(i,j,B[i][j]);
                q+=1;
            }
        }
    }

    cout<<q<<'\n';

    return 0;
}

int dy[4] = {-1,1,0,0};
int dx[4] = {0,0,1,-1};


void dfsr(int y, int x, char c)
{

    for(int i = 0; i<4; i++){

        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || nx < 0 || nx >= N || ny >= N) continue;

        if(A[ny][nx] == c) {
            A[ny][nx] = 'x';
            dfsr(ny,nx,c);
        }
    }

}

void dfsq(int y, int x, char c)
{

    for(int i = 0; i<4; i++){

        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || nx < 0 || nx >= N || ny >= N) continue;


        if(B[ny][nx] == c) {
            B[ny][nx] = 'x';
            dfsq(ny,nx,c);
        }
    }


}
