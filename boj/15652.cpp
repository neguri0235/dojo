#include <iostream>
#include <vector>

using namespace std;

int n,m;

int check[10];
vector<int> v;

void go()
{

    if(v.size() == m) {


        for(int i = 0; i<m-1; i++) {

            if(v[i] > v[i+1]) return;

        }

        for(int i = 0; i<m; i++) {
            cout<<v[i]<<' ';
        }
        cout<<'\n';
        return;
    }

    for(int i = 0; i<n; i++) {

        //if(check[i+1])  return;

        v.push_back(i+1);
        check[i+1] = 1;
        go();
        v.pop_back();
        check[i+1] = 0;
    }

}

int main()
{
    cin>>n>>m;
    go();
    return 0;
}
