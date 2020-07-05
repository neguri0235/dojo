#include <iostream>
#include <vector>

using namespace std;

int n;
int main()
{
    string s1, s2;
    cin>>n;
    while(n--){
        cin>>s1>>s2;

        cout<<"Distances: ";

        for(size_t i = 0; i<s1.size(); i++){

            int ss1 = s1[i] - 'A';
            int ss2 = s2[i] - 'A';

            if(ss1 == ss2){
                cout<<0<<' ';
            }else if(ss1 < ss2){
                cout<<(ss2-ss1)<<' ';
            }else{
                cout<<(ss2+26)-ss1<<' ';
            }
            


        }
        cout<<'\n';
    }
    return 0;
}