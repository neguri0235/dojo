#include <iostream>
#include <bitset>
#include <cstring>

using namespace std;

int v = 0;
int a = 0;
char cmd[10];

int main()
{

    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%s",cmd);
        if(!strcmp(cmd,"add")){
            scanf("%d",&v);
            a |= (1 << v);
        }else if(!strcmp(cmd,"check")){
            scanf("%d",&v);
            int b = a & (1<<v);
            if(b) printf("1\n");
            else printf("0\n");
        }else if(!strcmp(cmd, "remove")){
            scanf("%d",&v);
            int b = (1<<v) ^ 0xffffffff;
            a &= b;
        }else if(!strcmp(cmd, "toggle")){
            scanf("%d",&v);
            int b = 1<<v;
            if(a & b) {
                a ^= b;
            }else{
                a |= b;
            }
        }else if(!strcmp(cmd,"empty")){
            a = 0;
        }else if(!strcmp(cmd, "all")){
            a = 0xffffffff;
        }else{
            //assert(0);
        }
    }
    return 0;
}