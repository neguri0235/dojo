#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);

  int tc,a,b,c, res = 0;
  cin>>tc;
  while(tc--){
    cin>>a>>b>>c;
    int temp;
    if(a == b && b == c){
      temp = 10000 + (a*1000);
    }else if(a == b){
      temp = 1000 + (a*100);
    }else if(a == c){
      temp = 1000 + (a*100);
    }else if(b == c){
      temp = 1000 + (b*100);
    }else{
      temp = max({a,b,c}) * 100;
    }

    res = max({res,temp});
  }
  cout<<res<<'\n';
}
