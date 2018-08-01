#include <iostream>
#include <string>

int d[1001][1001];


std::string s1;
std::string s2;
int l1,l2;

int main()
{
    std::cin>>s1>>s2;
    l1 = s1.length();
    l2 = s2.length();

    for(int i = 1; i<=l1; i++){
        for(int j = 1; j<=l2; j++){

            if(s1[i-1] == s2[j-1]) {
                d[i][j] = d[i-1][j-1]+1;
            }else{
                d[i][j] = std::max(d[i-1][j], d[i][j-1]);
            }
        }
    }
    
    return 0;
}
