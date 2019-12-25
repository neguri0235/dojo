#include <iostream>
#include <vector>

using namespace std;

int n = 3;

vector<int> v;

void search(int k) {
    if (k ==  n+1) {
        for(auto a : v) {
            cout<<a<<' ';
        }
        cout<<endl;
    }else{
        v.push_back(k);
        search(k+1);
        v.pop_back();
        search(k+1);
    }
}

int main()
{
    
    search(1);

    return 0;
}