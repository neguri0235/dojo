#include <iostream>
#include <vector>

using namespace std;

long long n, m, ans;

int main()
{
  ios_base::sync_with_stdio(false);

  cin>>n>>m;
  vector<int>a(n);
  for(int i = 0; i<n; i++){
    cin>>a[i];
  }
  #ifdef CB
  for(auto i : a){
    cout<<i<<' ';
  }cout<<endl;
  #endif

  for(int i = 0; i<(1<<n); i++){
    long long p = 1;
    int cnt = 0;
    for(int j = 0; j<n; j++){
      if(i & ( 1 <<j)) {
        p *= a[j];
        cnt +=1;
      }
    }

    if(cnt == 0) continue;

    if(cnt %2 == 0) {
      ans -= (m/p);
    }else{
      ans += (m/p);
    }
  }
  cout<<ans<<'\n';
  return 0;
}
