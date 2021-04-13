#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int n, m, p, q, v;

vector<int>a[10001];
int b[10002];
int c[10002];

void dfs(int node)
{
  #ifdef CB
  cout<<"next "<<node<<endl;
  #endif
  v += 1;
  auto next = a[node];

  for(auto n : next) {
    if(b[n] == 0) {
      b[n] = 1;
      dfs(n);
    }
  }
}

int main()
{
//  ios_base::sync_with_stdio(false);
  #ifdef CB
  freopen("in.txt","r",stdin);
  #endif
  scanf("%d %d",&n, &m);

  for(int i = 0; i<m; i++){
    scanf("%d %d",&p, &q);
    a[q].push_back(p);
  }

  memset(c, 0, sizeof(c));

  for(int i = 1; i<=n; i++){
    memset(b, 0, sizeof(b));

    v = 0;
    b[i] = 1;
    dfs(i);
    c[i] = v;
  }

  int res = 0;
  for(int i = 1; i<=n; i++){
    if(res < c[i]) res = c[i];
  }

  for(int i = 1; i<=n; i++){
    if(c[i] == res){
      cout<<i<<' ';
    }
  }cout<<'\n';

  return 0;
}
