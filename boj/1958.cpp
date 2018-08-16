#include <iostream>
#include <string>

std::string s1;
std::string s2;
std::string s3;

int d[101][101][101];

int main()
{
    std::cin>>s1>>s2>>s3;

    int l1 = s1.length();
    int l2 = s2.length();
    int l3 = s3.length();


    for(int i = 1; i<=l1; i++){
        for(int j = 1; j<=l2; j++){
            for(int k = 1; k<=l3; k++){
                if( (s1[i-1] == s2[j-1]) && (s2[j-1] == s3[k-1]) && ( s1[i-1] && s3[k-1])) {
                    d[i][j][k] = d[i-1][j-1][k-1] +1;
                }else{
                    d[i][j][k] = std::max(std::max(d[i-1][j][k],d[i][j-1][k]),d[i][j][k-1]);
                }
            }
        }
    }

    std::cout<<d[l1][l2][l3]<<std::endl;

    return 0;
}
