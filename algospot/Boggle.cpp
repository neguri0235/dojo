#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string.h>

using namespace std;

int tc,n;
string str;

int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

int cache[10][5][5];

bool inRange(int y, int x)
{
    if(y < 0 || x < 0 || y >=5 || x >=5)
        return false;
    else
        return true;
}


bool hasWord(int y, int x, const vector<string>&a, const string& word, int cnt)
{
    if(!inRange(y,x)) return false;

    if(word.size() == 1 ) return word[0] == a[y][x];

    int& res = cache[cnt][y][x];
    if(res != -1) return res;

    if(word[0] != a[y][x]) return res = 0;


    for(int k = 0; k<8; k++){

        int ny = y + dy[k];
        int nx = x + dx[k];
        if(res = hasWord(ny, nx, a, word.substr(1),cnt+1)) return res;

    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>tc;

    while(tc--){

        vector<string> a(5);
        for(int i = 0; i<5; i++){
            cin>>a[i];
        }
#ifdef CB
    for(auto& e : a){ 
        cout<<e<<endl;
    }
#endif

        cin>>n;
        bool ans = false;
        for(int i = 0; i<n; i++){
            cin>>str;
            cout<<str<<' ';
            ans = false;
                memset(cache,-1, sizeof(cache));

            for(int y = 0; y <5; y++){


                if(ans) break;
                for(int x = 0; x<5; x++){
                    ans = hasWord(y,x,a,str,0);
                    if(ans) break;
                }
            }
            if(ans)
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<'\n';
        }

    }
}