#include <iostream>

long long go(long long a, long long b, long long c)
{
  if(b == 0) {
    return 1;
  }else if(b == 1) {
    return a%c;
  }else {
    if(b % 2 == 0) {
      long long temp = go(a, b/2, c);
      return temp * temp % c;
    }else {
      long long temp = go(a,b-1,c);
      return temp * a % c;
    }
  }
}

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  long long a, b, c;
  cin>>a>>b>>c;
  long long ans = go(a,b,c);
  cout<<ans<<'\n';
  return 0;
}
