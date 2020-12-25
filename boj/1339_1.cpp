#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, ans;

int check(vector<int>&, vector<string>&, vector<char>&);

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    vector<string>vc;
    vector<char> alpha;
    for(int i = 0; i<n; i++){
        string str;
        cin>>str;
        vc.push_back(str);
        for(auto e : str) alpha.push_back(e);
    }

    sort(alpha.begin(), alpha.end());
    alpha.erase(unique(alpha.begin(), alpha.end()),alpha.end());
#if DBG
    for(auto e : alpha) cout<<e<<' ';
    cout<<endl;
#endif
    vector<int>perm(alpha.size());

    for(int i = 0; i<alpha.size(); i++){
        perm[i] = 9-i;
    }

    do {
        ans = max(check(perm,vc,alpha), ans);
    }while(prev_permutation(perm.begin(), perm.end()));
    cout<<ans<<endl;
    return 0;
}

int check(vector<int>&perm, vector<string>&str, vector<char>& letters)
{
    int num = 0;
    int val[255];
    for(int i = 0; i<letters.size(); i++){
        val[letters[i]] = perm[i];
    }

    for(auto& s : str){
        int r = 0;
        for(auto& e : s ){
            r = r*10 + val[e];
        }
        num += r;
    }
    return num;
}