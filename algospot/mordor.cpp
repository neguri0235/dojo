#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define IDBG 0
#define DBG 0
#define AMAX 100001


int ttc;
int n,tc;
int a,b;
int map[AMAX];
int minmap[AMAX*5];
int maxmap[AMAX*5];

void input();
void solve(int,int);
void segment(int,int);

int initMIN(int, int, int);
int initMAX(int, int, int);
int MIN(int node, int start, int end, int left, int right);
int MAX(int node, int start, int end, int left, int right);

int main()
{
    input();
    return 0;
}

void input()
{

    if(IDBG) freopen("in.txt","r",stdin);

    scanf("%d",&ttc);

    while(ttc--) {
        scanf("%d %d",&n, &tc);
        for(int i = 0; i<n; i++) {
            scanf("%d", &map[i]);
        }
	  
        initMIN(1, 0, n-1);
        initMAX(1, 0, n-1);
        for(int i = 0; i<tc; i++) {
            scanf("%d %d",&a,&b);
            //solve(a,b);


            segment(a,b);
        }
    }
}


void solve(int s, int e)
{
    if(DBG) cout<<s<<" to "<<e<<endl;


    int _min = 20001;
    int _max = 0;

    for(int i = s; i<=e; i++) {

        if(_min > map[i]) {
            _min = map[i];
        }


        if(_max < map[i]) {
            _max = map[i];
        }
    }


    printf("%d\n",_max-_min);
}


void segment(int _start, int _end)
{
    int _min = MIN(1,0,n-1,_start,_end);
    int _max = MAX(1,0,n-1,_start,_end);
    printf("%d\n",_max - _min);
}


int initMIN(int node, int start, int end)
{
    if( start == end)
        return minmap[node] = map[start];

    int mid = (start+end) / 2;
    return minmap[node] = min(initMIN(node*2, start, mid), initMIN(node*2+1, mid+1, end));
}

int initMAX(int node, int start, int end)
{
    if( start == end)
        return maxmap[node] = map[start];

    int mid = (start+end) / 2;
    return maxmap[node] = max(initMAX(node*2, start, mid), initMAX(node*2+1, mid+1, end));
}

int MIN(int node, int start, int end, int left, int right)
{
    if(left > end || right <start ) return 9999999;

    if(left <= start && end <= right)
        return minmap[node];

    int mid = (start + end) /2;

    return min(MIN(node*2, start, mid, left, right), MIN(node*2+1, mid+1,end, left, right));
}


int MAX(int node, int start, int end, int left, int right)
{
    if(left > end || right <start ) return -1;

    if(left <= start && end <= right)
        return maxmap[node];

    int mid = (start + end) /2;

    return max(MAX(node*2, start, mid, left, right), MAX(node*2+1, mid+1,end, left, right));
}
