#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> lotto;

void dfs(vector<int>&a, int index, int cnt)
{
    if(lotto.size() == 6) {
        for(int e : lotto){
            cout<<e<<' ';
        }cout<<endl;
        return;
    }
 
    if (a.size() == index) return;

    lotto.push_back(a[index]);
    dfs(a, index+1, cnt+1);
    lotto.pop_back();
    dfs(a,index+1, cnt);
}

int main()
{

    ios_base::sync_with_stdio(false);

    while(true){
        int n;
        cin>>n;
        if(n == 0) break;
        vector<int>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        dfs(a,0,0);
        cout<<endl;
    }
    return 0;
}