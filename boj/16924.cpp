#include <iostream>
#include <string>
#include <vector>

using namespace std;


char A[101][101];
int N,M;
string s;

vector<int> check(int,int);

int main()
{
#ifdef DBG
   freopen("16924.txt","r",stdin);
#endif

    cin>>N>>M;
    for(int i = 0; i<N; i++){
        cin>>s;
        for(int j = 0; j<M; j++){
            A[i][j] = s[j];
        }
        cout<<s<<endl;
    }

#ifdef DBG
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cout<<A[i][j]<<' ';
        }cout<<endl;
    }
    cout<<"------------------"<<endl;
#endif

    for(int i = 1; i<N-1; i++){
        for(int j = 1; j<M-1; j++){
            vector<int> r = check(i,j);

            for(int k = 0; k < r.size(); k++){
                cout<<r[k]<<' ';
                if(k %2 == 0) cout<<'\n';
            }
        }
    }


    return 0;
}


vector<int> check(int y,int x)
{
    vector<int> r;

    int d = 1;

#ifdef DBG
    cout<<y<<x<<endl;
#endif

    while(true){
        if(y+d > N-1 || x+d > N-1 || y-d == 0 || x-d == 0) break;
        char c1 = A[y+d][x];
        char c2 = A[y][x+d];
        char c3 = A[y-d][x];
        char c4 = A[y][x-d];

        if(c1 == '*' && c2 == '*' && c3 == '*' && c4 == '*'){
            r.push_back(y);
            r.push_back(x);
            r.push_back(d);
        }else{
            break;
        }
    }
    return r;
}
