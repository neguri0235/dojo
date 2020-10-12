// 재귀를 이용하여  최장 공통 부분 수열 길이 구하기
// 메모 전략을 사용해 보기

#include <iostream>
#include <vector>
#include <cstring>

#define DBG false

using namespace std;

int get_lcs(vector<vector<int>>&, string&, string&, int, int);



int main()
{
    string s1 = "AAACCGTGAGTTATTCGTTCTAGAA";
    string s2 = "CACCCCTAAGGTACCTTTGGTTC";
    vector<vector<int>>A(30,vector<int>(30,-1));
    cout<<get_lcs(A, s1, s2, s1.size(), s2.size());
    return 0;
}

int get_lcs(vector<vector<int>>& A, string& s1, string& s2, int n, int m)
{

    if(A[n][m] != -1) return A[n][m];

    if(n == 0 || m == 0) {
        return 0;
    }

    if(s1[n-1] == s2[m-1]) {
        return A[n][m] = 1 + get_lcs(A, s1, s2, n-1, m-1);
    }else{
        return A[n][m] = max(get_lcs(A, s1, s2, n-1, m), get_lcs(A, s1, s2, n, m-1));
    }
}