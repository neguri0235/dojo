#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<int>dp(1001,0);
    queue<int>q;
    dp[1] = 1;
    q.push(1);
    while(!q.empty()){
        int next = q.front(); q.pop();
        if(n == next) {
            cout<<dp[n]<<'\n';
            break;
        }

        if (next + 1 <= n)
        {
            if ((dp[next] + 1) == 0 || dp[next] + 1 > (dp[next] + 1))
            {
                dp[next + 1] = dp[next] + 1;
                q.push(next + 1);
            }
        }
        if (next * 2 <= n)
        {
            if (dp[next*2] == 0 || dp[next * 2] > (dp[next] + 2))
            {
                dp[next * 2] = dp[next] + 2;
                q.push(next * 2);
            }
        }
        if (next - 1 > 0)
        {
            if (dp[next-1] == 0) //|| dp[next - 1] >= (dp[next] - 1))
            {
                dp[next - 1] = dp[next] + 1;
                q.push(next - 1);
            }
        }
    }

    return 0;
}