#include <iostream>

using namespace std;

char s[101];
int ans;
int main()
{
    cin>>s;
    for(int i = 0; i<101; i++) {
        if((s[i] >= 'a' && s[i] <= 'z') ||( s[i] >= 'A' && s[i] <= 'Z'))
        ans++;
    }
    cout<<ans<<'\n';
    return 0;
}
