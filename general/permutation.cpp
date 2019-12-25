#include <iostream>
#include <vector>

using namespace std;

int n;
bool chosen[10];

vector<int> permutation;

void search() {
    if(permutation.size() == n) {
        for(auto a : permutation) {
            cout<<a<<' ';
        }
        cout<<endl;
    }else{
        for (int i = 1; i <=n; i++) {
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main()
{
    n = 4;
    search();
    return 0;
}