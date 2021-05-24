
#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cin>>a>>b>>c;
  if((a+b+c) >= 100) cout<<"OK"<<endl;
  else{
    if(a < b && a < c) {
      cout<<"Soongsil"<<endl;
    }else if( c < b && c < a) {
      cout<<"Hanyang"<<endl;
    }else{
      cout<<"Korea"<<endl;
    }
  }
  return 0;
}
