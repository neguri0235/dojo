#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n = 5;
    vector<string>v;
    while(n--){
       string s;
       cin>>s;
       v.push_back(s);
    }

    bool no = false;
    
    for(int i = 0; i<5; i++){

        auto s = v[i];
        auto it = s.find("FBI");
        if(it != std::string::npos){
            cout<<i+1<<endl;
            no = true;
        }
    }

    if(!no) {
        cout<<"HE GOT AWAY!"<<endl;
    }

    return 0;
}
