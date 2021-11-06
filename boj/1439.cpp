#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    cin>>str;

    int count0 = 0;
    int count1 = 0;

    if(str[0] == '0') count0 += 1;
    else count1 += 1;

    for(size_t i = 0; i<str.size()-1; i++){
        if (str[i] != str[i+1]){

            if( str[i+1] == '0') count0 += 1;
            else count1 +=1;
        }
    }

    cout<<min(count0, count1)<<endl;

    return 0;
}