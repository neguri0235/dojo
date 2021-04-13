#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);

  #ifdef CB
  freopen("in.txt","r",stdin);
  #endif

  int x1,y1,x2,y2,x3,y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;

  int a = x1*y2 + x2*y3 + x3*y1;
  int b = x2*y1 + x3*y2 + x1*y3;

  if((a-b) < 0) {
    cout<<-1<<endl;
  }else if((a-b) == 0){
    cout<<0<<endl;
  }else{
    cout<<1<<endl;
  }

  return 0;
}
