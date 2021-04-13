#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  int tc, a, b, n, y, k;
  cin>>tc;
  while(tc--){
    n = 9;
    y = 0;
    k = 0;
    while(n--){
      cin>>a>>b;
      y += a;
      k += b;
    }
    if(y > k){
      cout<<"Yonsei"<<endl;
    }else if(y < k) {
      cout<<"Korea"<<endl;
    }else{
      cout<<"Draw"<<endl;
    }
  }
  return 0;
}
