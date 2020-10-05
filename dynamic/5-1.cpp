// 최소 교정 비용 문제
// 재귀 호출을 이용해 보자

#include <iostream>
#include <cstring>

using namespace std;

int editDistance(const char*, const char*);

int main()
{
    const char* s1 = "CAT";
    const char* s2 = "CAR";
    cout<<editDistance(s1, s2)<<endl;
    return 0;
}

int editDistance(const char* s1, const char* s2)
{
    if(s1 == nullptr || *s1 == '\0') return strlen(s2);
    if(s2 == nullptr || *s2 == '\0') return strlen(s1);

    if(*s1 == *s2) {
        return editDistance(s1+1, s2+1);
    }

    // 삭제 연산
    int d = editDistance(s1+1, s2);
    // 치환 연산
    int r = editDistance(s1+1, s2+1);

    // 추가 연산
    int i = editDistance(s1, s2+1);

    return min(min(d,r),i)+1;
}