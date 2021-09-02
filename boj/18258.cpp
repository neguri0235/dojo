//#include <bits/stdc++.h>
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    int n,v;
    char cmd[8];
    deque<int>deq;
    scanf("%d",&n);
    while(n--){
        scanf("%s",&cmd);
        if(cmd[1] == 'u'){
            scanf("%d",&v);
            deq.push_back(v);
        }

        if(cmd[0] == 'f') {
            if(deq.empty()) printf("-1\n");
            else
            printf("%d\n",deq.front());
        }

        if(cmd[0] == 'b'){
            if(deq.empty()) printf("-1\n");
            else            
            printf("%d\n",deq.back());
        }

        if(cmd[1] == 'o'){
            if(deq.empty()) {
               printf("-1\n");
            }
            else{
                printf("%d\n",deq.front());
                deq.pop_front();
            }
        }

        if(cmd[0] == 'e'){
            printf("%d\n",deq.empty());
        }

        if(cmd[0] == 's'){
            printf("%d\n",deq.size());
        }
    }
    return 0;
}