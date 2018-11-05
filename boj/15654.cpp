#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int check[10001];
int a[10];
int n,m;


void go()
{

    if(v.size() == m) {
        for(int i = 0; i<m ; i++) {
            cout<<v[i]<<' ';
        }
        cout<<'\n';
        return ;
    }

    for(int i = 0; i<n; i++) {

        if(check[a[i]]) continue;

        v.push_back(a[i]);
        check[a[i]] = 1;
        go();
        check[a[i]] = 0;
        v.pop_back();
    }
}


int main()
{
    cin>>n>>m;

    for(int i = 0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    sort(begin(a),begin(a)+n);

    /*
    for(int i = 0; i<n; i++) {

        cout<<a[i]<<' ';
    }
    cout<<endl;
    cout<<"----------------"<<endl;
    */

    go();

    return 0;
}
