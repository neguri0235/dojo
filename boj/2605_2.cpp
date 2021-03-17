#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, c;
    cin>>n;
    cin>>c;
    vector<int>a;
    a.push_back(1);
    for(int i = 2; i<=n; i++){
        cin>>c;
        if(c > a.size()) {
            a.push_back(c);
        }else{
            auto it = a.begin();
            a.insert(it+c,i);
        }
    }

  for(auto it = a.rbegin(); it != a.rend(); it++){
      cout<<*it<<' ';
  }cout<<endl;
    return 0;
}