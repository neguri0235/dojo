#include <iostream>

using namespace std;

int num, upper,lower,sp;

int low_check(char c)
{
    if( c >= 'a' && c <= 'z') return 1;
    else return 0;
}

int up_check(char c)
{
    if(c >= 'A' && c <= 'Z') return 1;
    else return 0;
}

int num_check(char c)
{
    int n = c - '0';
    if( n >=0 && n <= 9) return 1;
    else return 0;
}

int sp_check(char c)
{
    if ( c == ' ') return 1;
    else return 0;

}

int main()
{
    while(1){
        string str;
        getline(cin,str);
        if(str.size() == 0) break;

        for(int i = 0; i<str.size(); i++) {

            char c = str[i];

            lower += low_check(c);
            upper += up_check(c);
            num += num_check(c);
            sp += sp_check(c);
        }

        cout<<lower<<' '<<upper<<' '<<num<<' '<<sp<<endl;
        lower = upper = num = sp = 0;

    }
    return 0;
}
