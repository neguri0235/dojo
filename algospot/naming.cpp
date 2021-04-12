#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> KMP(const string& s1, const string& p)
{
  string s = s1 + p;
  int n = (int)s.length();
  vector<int>table(n,0);
  int j = 0;
  for(int i = 1; i<n; i++){
    while( j > 0 && s[i] != s[j]){
      j = table[j-1];
    }

    if(s[i] == s[j]){
      table[i] = ++j;
    }
  }
  return table;
}

int main()
{
  ios_base::sync_with_stdio(false);
  string s, p;
  cin>>s>>p;

  vector<int> res = KMP(s, p);
  #ifdef CB
  for(auto i : res){
    cout<<i<<' ';
  }cout<<'\n';
  #endif

  int k = (int)res.size();
  vector<int> ret;
  while(k > 0){
    ret.push_back(k);
    k = res[k-1];
  }
  #ifdef CB
  for(auto i : ret){
    cout<<i<<' ';
  }cout<<'\n';
  #endif

  for(auto iter = ret.rbegin(); iter != ret.rend(); iter++){
    cout<<*iter<<' ';
  }cout<<'\n';

  return 0;
}
