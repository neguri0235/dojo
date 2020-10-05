// 연속된 부분 배열의 최대값 구하기
// 완전 탐색으로 구해보기
// 시간 복잡도는 O(N^2)가 됨

#include <iostream>

using namespace std;

int ARR[] = {-2, -3, 4, -1, -2, 1, 5, -3};

int main()
{
    int temp = 0;
    int max_sum = 0;
    for(int i = 0; i<sizeof(ARR)/sizeof(int); i++){
        temp = 0;
        for(int j = i; j<sizeof(ARR)/sizeof(int); j++){
            temp += ARR[j];
            max_sum = max(max_sum, temp);
        }
    }

    cout<<max_sum<<endl;

    return 0;
}