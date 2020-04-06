#include <iostream>
#include <unordered_map>

using namespace std;

int N,M;
long long a;

unordered_map<long long, int > um;
int main()
{
    scanf("%d",&N);

    for(int i = 0; i < N; i++) {
        scanf("%lld",&a);
        um[a] += 1;
    }

    scanf("%d",&M);

    for(int i = 0; i<M; i++) {
        scanf("%lld",&a);
        cout<<um[a]<<' ';
    }
    return 0;
}
