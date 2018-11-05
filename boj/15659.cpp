#include <iostream>
#include <vector>

using namespace std;

int n,m;

int i;
int check[100];
vector<int>v;

void go()
{

    if(v.size() == m) {

        for(int i = 0; i< m-1; i++) {

            if(v[i] > v[i+1])
            return;
        }

        for(int i = 0; i<m; i++) {
            cout<<v[i]<<' ';
        }
        cout<<'\n';

        return;
    }

    for(int i = 0; i<n; i++) {

        if(check[i+1]) continue;

        check[i+1] = 1;
        v.push_back(i+1);
        go();
        check[i+1] = 0;
        v.pop_back();
    }
}


int main()
{
    cin>>n>>m;
    go();
    return 0;
}
