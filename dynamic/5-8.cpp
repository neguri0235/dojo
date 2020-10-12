// 부분 집합의 합 구하기

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {3,2,1,7};

    vector<vector<int>>A(10,vector<int>(10,0));
 
    int N = 4; // arr size
    int X = 6; // target
    bool ans = false;

    for(int i = 1; i<N+1; i++){
        for(int j = 1; j<X+1; j++){
            if (A[i-1][j] + arr[j] >= j) {
                A[i][j] = A[i-1][j] + j;
                if(A[i][j] == X ) ans =  true;
            }
        } 
    }
    cout<<ans<<endl;

    for(int i = 1; i<N+1; i++){
        for(int j = 1; j<X+1; j++){
            cout<<A[i][j]<<' ';
        } cout<<endl;
    }

    return 0;    
}
