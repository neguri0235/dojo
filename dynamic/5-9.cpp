// 재귀를 이용하여  최장 공통 부분 수열 길이 구하기
// 이 예제에서는 연속하지 않은 부분 문자열도 가능함. 
// 만약 연속한 부분 문자열이라고 하면 조건이 달라짐

#include <iostream>
#include <vector>
#include <cstring>

#define DBG false

using namespace std;

int get_lcs(string&, string&, int, int);

int main()
{
    string s1 = "AAACCGTGAGTTATTCGTTCTAGAA";
    string s2 = "CACCCCTAAGGTACCTTTGGTTC";
    cout<<get_lcs(s1, s2, s1.size(), s2.size());
    return 0;
}

int get_lcs(string& s1, string& s2, int n, int m)
{
    if(n == 0 || m == 0) {
        return 0;
    }

    if(s1[n-1] == s2[m-1]) {
        return 1 + get_lcs(s1, s2, n-1, m-1);
    }else{
        return max(get_lcs(s1, s2, n-1, m), get_lcs(s1, s2, n, m-1));
    }
}