#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
string s;

void print(vector<int>& v){
    for(auto e : v){
        cout<<e;
    }cout<<endl;
}

bool check(vector<int>& v, string& s)
{
    for(int i = 0; i<v.size(); i++){
        if(s[i] == '>' && v[i] < v[i+1]) {
            return false;
        }

        if(s[i] == '<' && v[i] > v[i+1]){
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin>>n;
    
    for(int i = 0; i<n; i++){
        char c;
        cin>>c;
        s.push_back(c);
    }

    vector<int>big(n+1);
    vector<int>small(n+1);

    for(int i = 0; i<n+1; i++){
        big[i] = 9-i;
        small[i] = i;
    }
  
    do {
        if(check(big,s)) {
            print(big);
            break;
        }

   }while(prev_permutation(big.begin(), big.end()));
    
    do{
        if(check(small, s)){
            print(small);
            break;
        }

    }while(next_permutation(small.begin(),small.end()));

    return 0;
}
/*
2
< > 
*/
