//https://www.acmicpc.net/problem/11004

#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,k;
    long long a;

    vector<long long> v ; //= (0,5000001);
    scanf("%d %d",&n,&k);

    for(int i = 0; i<n; i++){
        scanf("%ld",&a);
        v.push_back(a);
    }
    nth_element(v.begin(),v.begin()+k,v.end());
    cout<<v[0]<<endl;

    return 0;
}

