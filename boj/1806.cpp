#include <iostream>
#include <vector>

using namespace std;


unsigned long long s;
unsigned int n,ans;

int main()
{
    ios_base::sync_with_stdio(false);

    ans = 987654321;
    cin>>n>>s;
    vector<unsigned long>A(n+2);
    for(unsigned int i = 0; i<n; i++){
        cin>>A[i];
    }

    for(unsigned int i = 0; i<n; i++){
        unsigned long long sum = 0;
        unsigned int k = 1;
        for(unsigned int j = i; j<n;k++, j++){

            sum += A[j];
            if(sum >=s) {
                ans = k < ans? k : ans;
                break;
            }
        }
    }
    cout<<ans<<'\n';
    return 0;

}
