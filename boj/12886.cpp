#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int check[1000][1000];

int main()
{
    ios_base::sync_with_stdio(false);
    int a, b, c;
    cin>>a>>b>>c;

    int sum = a+b+c;
    if(sum % 3) {
        cout<<0<<endl;
        return 0;
    }

    queue<pair<int, int> > q;
    q.push(make_pair(a,b));
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        int z = sum - x - y;
        if(x == y && y == z) {
            cout<<1<<endl;
            break;
        }
        int nx[] = {x, x, y};
        int ny[] = {y, z, z};

        for(int i = 0; i<3; i++) {
            int a = nx[i];
            int b = ny[i];
        
            if(a<b){
                b -= a;
                a += a;
            }else if (a > b){
                a -= b; 
                b+=b;
            }else{
                continue;
            }

            int c = sum -a -b;
            int X = min(min(a,b),c);
            int Y = max(max(a,b),c);
            if(!check[X][Y]) {
                q.push(make_pair(X,Y));
                check[X][Y] = 1;
            }
        }
    }
    cout<<0<<endl;
}