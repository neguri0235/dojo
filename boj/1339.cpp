#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int n,ret,r;
string s;
vector<string> A;
vector<char> letters;


//#define __CB__

char ARR[256];

int calc(vector<string>& A, vector<int>& v, vector<char>& letters)
{

    int sum = 0;
    int a = 0;

    for(int i = 0; i<letters.size(); i++) {
        ARR[letters[i]] = v[i];
    }
    

    for(int i = 0; i<A.size(); i++) {

        string s = A[i];

        for(int j = 0; j<s.size(); j++){
            a = a*10;
            a += ARR[s[j]];
        }
#ifdef __CB__
        cout<<a<<endl;
#endif
        sum += a;
        a = 0;
    }

    return sum;
}

int main()
{

#ifdef __CB__
    freopen("1339.txt","r",stdin);
#endif

    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>s;
        A.push_back(s);

        for(auto e: s) letters.push_back(e);

    }

    sort(letters.begin(), letters.end());
    letters.erase(unique(letters.begin(), letters.end()), letters.end());

    vector<int> perm(letters.size(),0);
    for(int i = 0; i< letters.size(); i++) {
        perm[i] = 9-i;
    }

#ifdef __CB__
    for(auto e: A) cout<<e<<endl;
    for(auto e: letters) cout<<e<<endl;
    for(auto e: perm) cout<<e<<endl;
#endif

    do{
        int r = calc(A,perm,letters);
        ret = max(r,ret);
    }while(prev_permutation(perm.begin(), perm.end()));

    cout<<ret<<endl;

    return 0;
}
