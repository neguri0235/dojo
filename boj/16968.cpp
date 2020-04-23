#include <iostream>
#include <string>

using namespace std;

int check(char c) {
    if (c == 'c') return 26;
    else return 10;
}

int main()
{
    string s;
    cin>>s;

    char last = ' ';
    long ans = 1;
    int idx = 0;

    while (idx < s.size()){

        if(s[idx] == s[idx+1]){
            int r = check(s[idx]);
            ans *= (r*r-r);
            idx+=2;
        }else{
            int r = check(s[idx]);
            ans *= r;
            idx+=1;
        }
    }

    cout<<ans<<endl;
    return 0;
}

