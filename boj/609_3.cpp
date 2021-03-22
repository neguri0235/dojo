#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int tc, n, ans;
long long num;

int main()
{
    ios_base::sync_with_stdio(false);
    
    vector<int> promise;
    promise.push_back(202021);
    promise.push_back(20202021);

    for(int i  = 0; i<10; i++){
        promise.push_back(202002021+(i*10000));
    }
    cin>>tc;
    while(tc--) {
        ans = 0;
        cin>>n;
        unordered_map<long long, long long>numbers;
        for(int i = 0; i<n; i++){
            cin>>num;
            numbers[num] += 1;
        }

        for(auto [k, v] : numbers){
            for(auto p : promise){
                int target = p - k;
                auto it = numbers.find(target);
                if(it != numbers.end()){
                    ans += v*it->second;
                }
            }
        }

        cout<<(ans/2)<<'\n';
    }
    return 0;
}