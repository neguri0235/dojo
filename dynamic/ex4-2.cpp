// 타일 채우기
// 2*N 개의 크기의 타일을 2*1로 채워보자
// 다이내믹 프로그래밍을 사용해 풀어보자

#include <iostream>

using namespace std;

int countWay(int);
int MEM[51] = {0};

int main()
{
    int n = 0;
    cin>>n;
    MEM[0] = 0;
    MEM[1] = 1;
    MEM[2] = 2;
    
    for(int i = 3; i<=n; i++){
        MEM[i] = MEM[i-1] + MEM[i-2];
    }

    cout<<MEM[n]<<endl;

    return 0;
}
