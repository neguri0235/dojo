#include <iostream>

using namespace std;


int n, w;

int wi[1002];
int pi[1002];

int d[10002];

int main()
{
    cin>>n>>w;

    for(int i = 0; i<n; i++) cin>>wi[i]>>pi[i];

    for(int i = 0; i<n; i++){

        for(int j = w; j >= wi[i]; j--){

            d[j] = std::max(d[j-wi[i] ] + pi[i], d[j]);

        }

    }

    cout<<d[w]<<endl;
    return 0;
}
