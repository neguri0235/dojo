#include <iostream>
#include <cstdio>

using namespace std;

int sum,a;
int score,fst;

int main()
{
    for(int i = 0; i<5; i++){
        for(int j = 0; j<4; j++) {
            scanf("%d",&a);
            sum += a;
        }

        score = max(score,sum);
        if(score == sum) {
            fst = i+1;
        }
        sum = 0;
    }

    cout<<fst<<" "<<score<<'\n';

    return 0;
}
