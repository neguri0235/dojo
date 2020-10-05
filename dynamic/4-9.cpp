// 연속된 부분 배열의 최대값 구하기
// 완전 탐색으로 구해보기
// O(N^2) 가 아닌 O(N)으로 구해보기
// 카데인 알고리즘이라고 부른다고 함
// 아래와 같은 경우 모두 음수인 경우는 처리 하지 못함

#include <iostream>

using namespace std;

#define DBG 0

int ARR[] = {-2, -3, 4, -1, -2, 1, 5, -3};
//int ARR[] = {-2, -3, -4, -1, -2, -1, -5, -3};
//int ARR[] = {-2, -3, -4, 1, -2, -1, -5, -3};

int kadane();

int main()
{
    int t = ARR[0];
    int mt = ARR[0];
    for(int i = 1; i<8; i++){
            t = max(ARR[i], ARR[i]+t);
        if(ARR[i] > ARR[i]+t){
            t = ARR[i] + t;
        }

        if(mt < t) mt = t;
        if(DBG) {
            cout<<ARR[i]<<'\t'<<t<<'\t'<<mt<<endl;
        }
    }

    cout<<mt<<endl;
    cout<<kadane()<<endl;

    return 0;
}


// 책에 나온 카데인 알고리즘
int kadane()
{
    int t = 0;
    int mt = 0;

    for(int i = 0; i<8; i++){
        t += ARR[i];
        if(t <= 0) t = 0;
        if(mt < t) mt = t;
    }
    return mt;
}