#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> v;
string s;
int ans;

int main()
{
    for(int i = 0; i<8; i++){
        cin>>s;
        v.push_back(s);
    }

    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){

            if(i%2 == 0) {
                if(j%2== 0 && v[i][j] == 'F') {
                    ans++;
                }
            }else{
                if(j%2== 1 && v[i][j] == 'F') {
                    ans++;
                }

            }
        }
    }

    cout<<ans<<'\n';

    return 0;
}
