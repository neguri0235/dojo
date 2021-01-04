#include <iostream>

using namespace std;

int n,ans;

int check1[16]; // |
int check2[16]; // /
int check3[16]; // 
int a[15][15];

int check(int i, int j)
{
    if(check1[j] == 1) return 0;
    if(check2[i+j] == 1) return 0;
    if(check3[i-j+n] == 1) return 0;

    return 1;
}

int go(int r)
{

    if(r == n) {
        return 1;
    }
    int cnt = 0;

    for(int c = 0; c<n; c++){
        if(check(r, c)) {
            check1[c] = 1;
            check2[c+r] = 1;
            check3[r-c+n] = 1;
            a[r][c] = 1;
            cnt+=go(r+1);
            check1[c] = 0;
            check2[c+r] = 0;
            check3[r-c+n] = 0;
            a[r][c] = 0;
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin>>n;
    ans = go(0);
    cout<<ans<<endl;
    return 0;
}