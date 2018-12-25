#include <iostream>

using namespace std;

string s;
long sum,num;

int main()
{
    getline(cin,s);

    for(int i = 0; i<s.size(); ++i){
        if(s[i] != ' ') {
            num *=10;
            num += s[i]-'0';
        }else{

            sum +=num;
            num = 0;
        }

    }

    sum +=num;

    cout<<sum<<endl;
    return 0;
}
