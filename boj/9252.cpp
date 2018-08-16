#include <iostream>
#include <string>
#include <cstdio>

int d[1001][1001];
int b[1001][1001];

std::string s1;
std::string s2;
std::string s3;

int main()
{
    std::cin>>s1>>s2;

    int l1 = s1.length();
    int l2 = s2.length();
    int pmax = 0;

/*
    for(int i = 1; i<=l1; i++){
        for(int j = 1; j<=l2; j++){

            if(s1[i-1] == s2[j-1]){
                d[i][j] = d[i-1][j-1] + 1;
            }else{
                d[i][j] = std::max(d[i-1][j], d[i][j-1]);
            }
        }
    }
*/

/*

    for(int i = 1; i<=l1; i++){
        for(int j = 1; j<=l2; j++){

            if(s1[i-1] == s2[j-1]){
                d[i][j] = d[i-1][j-1] + 1;
            }else{
                d[i][j] = std::max(d[i-1][j], d[i][j-1]);

            }

            if(d[i][j] > pmax) {
                s3.push_back(s1[i-1]);
                pmax = d[i][j];
            }
        }
    }

*/



    for(int i = 1; i<=l1; i++){
        for(int j = 1; j<=l2; j++){

            if(s1[i-1] == s2[j-1]){
                d[i][j] = d[i-1][j-1] + 1;
                b[i][j] = 1;
            }else{
                d[i][j] = std::max(d[i-1][j], d[i][j-1]);

                if(d[i][j] == d[i-1][j])
                    b[i][j] = 2;
                else
                    b[i][j] = 3;
            }
        }
    }

    int i = l1;
    int j = l2;

    while(b[i][j] != 0) {

        if(b[i][j] == 1) {
            s3.push_back(s1[i-1]);
            i--;
            j--;
        }else if( b[i][j] == 2){
            i--;
        }else{
            j--;
        }
    }


    std::cout<<d[l1][l2]<<std::endl;
    for(int i = s3.length()-1; i>=0; i--){
        printf("%c",s3[i]);

    }



    return 0;
}
