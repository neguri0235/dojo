#include<iostream>
#include<set>

using namespace std;

int n,k;

int main()
{
#ifdef DBG
    freopen("1655.txt","r",stdin);
#endif
    scanf("%d",&n);

    multiset<int>ms;

    auto it = ms.begin();

    for(int i = 0; i<n; i++){
        scanf("%d",&k);
        ms.insert(k);
        cout<<*(++it)<<endl;
    }
    return 0;
}
