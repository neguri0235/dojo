#include <iostream>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);

  int n, a, b;
  cin>>n;
  while(n--){
    cin>>a>>b;

    if(a >= b) {
      cout<<"MMM BRAINS"<<endl;
    }else{
      cout<<"NO BRAINS"<<endl;
    }
  }
  return 0;
}
