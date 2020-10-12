// 부분 집합의 합 구하기

#include <iostream>
#include <vector>

using namespace std;

bool isSubsetSum(int* arr, int n, int X);

int main()
{
    int arr[] = {3, 2, 1,7};
    cout<<isSubsetSum(arr, 4, 6)<<endl;
    return 0;
}

bool isSubsetSum(int* arr, int n, int X)
{
    if(!X) return true;

    if(n == 0) return false;

    if(arr[0] > X) return isSubsetSum(arr+1, n-1, X);

    return isSubsetSum(arr+1, n-1, X) || isSubsetSum(arr+1, n-1, X - arr[0]);
}