#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s1, s2;
    vector<int> vec;
    cin>>s1;
    cin>>s2;

    auto it_s1 = s1.rbegin();
    auto it_s2 = s2.rbegin();

    int carry = 0;

    while( it_s1 != s1.rend() && it_s2 != s2.rend()){

        int sum = (*it_s1 - '0') + (*it_s2 - '0') + carry;
        carry = 0;
        if(sum >9) {
            sum -= 10;
            carry = 1;
        }

        vec.push_back(sum);

        it_s2++;
        it_s1++;
    }

    while (it_s1 != s1.rend()){
        int sum = carry + (*it_s1 - '0');
        carry = 0;

        if(sum > 9) {
            sum -=10;
            carry = 1;
        }
        vec.push_back(sum);
        it_s1++;
    }

    while (it_s2 != s2.rend()){
        int sum = carry + (*it_s2 - '0');
        carry = 0;

        if(sum > 9) {
            sum -=10;
            carry = 1;
        }
        vec.push_back(sum);
        it_s2++;
    }


    if(carry) {
        vec.push_back(1);
    }
    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        cout<<*it;
    }cout<<endl;

    return 0;
}

//9223372036854775807
//9223372036854775808
//18446744073709551615