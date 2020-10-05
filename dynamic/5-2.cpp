// 최소 교정 비용 문제
// 다이내믹 프로그래밍으로 해보자

#include <iostream>
#include <cstring>

using namespace std;

int editDistance(const char*, const char*);
int editDistance(const char*, const char*, int, int);

int main()
{
    const char* s1 = "CAT";
    const char* s2 = "CARTR";
    cout<<editDistance(s1, s2)<<endl;
    return 0;
}

int editDistance(const char* s1, const char* s2)
{
    int MEM[20][20] = {0};
    for(int i = 0; i<20; i++){
        MEM[i][0] = i;
        MEM[0][i] = i;
    }

    for(size_t i = 1; i<strlen(s1); i++){
        for(size_t j = 1; j<strlen(s2); j++){

            if(s1[i] == s2[i]) {
                MEM[i][j] = MEM[i-1][j-1];
            }else{
                MEM[i][j] = 1+ min(min(MEM[i-1][j-1], MEM[i-1][j]),MEM[i][j-1]);
            }
        }
    }

    return MEM[strlen(s1)-1][strlen(s2)-1];

    return 0;
}

int editDistance(const char* s1, const char* s2, int m, int n)
{
    int D[m+1][n+1];
    for(int j = 0; j<=n; j++){
        D[0][j] = j;
    }

    for(int i = 0; i<=n; i++){
        D[i][0] = i;
    }

    for(int i = 1; i<=)
}