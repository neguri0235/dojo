// 정수 값의 배열이 주어졌을 때 배열의 각 원소를 누적합으로 갱신하는 재귀 함수를 작성
// 1 2 3 4 5 가 입력되면, 
// 1 3 6 10 15 21 를 만들자

#include <iostream>
#include <vector>

using namespace std;

int change(vector<int>&v1, vector<int>&v2,int n)
{
    if( n == 0) {v2[n] = v1[n];  return v1[0];}
    else{
        v2[n] = v1[n] + change(v1, v2, n-1); 
        return v2[n];
    }
}

int main()
{
    vector<int> v(10);
    vector<int> va(10);
    for(int i = 0; i<10; i++) v[i] = i+1;
    
    change(v,va,v.size()-1);
    
    for(auto e : v) cout<<e<<' ';
    cout<<endl;
    for(auto e : va) cout<<e<<' ';
    cout<<endl;
    return 0;
}
