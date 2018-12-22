#include <iostream>

using namespace std;

string s1,s2;
int ans,tc;

int main()
{
    cin>>tc;
    while(tc--) {
        
        cin>>s1>>s2;
        cout<<"Distances: ";
        for(int i = 0; i<s1.size(); i++) {

            if(s1[i] <= s2[i]) 
                cout<<s2[i] - s1[i]<<' ';
            else 
                cout<<26 + s2[i] - s1[i]<<' ';
        }


    }
   
    return 0;
}
