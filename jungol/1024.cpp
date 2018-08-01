#include <iostream>
#include <cstdio>


int M,N;
int a[501][501];
int d[501][501];


int dy[] = {1,-1,0,0};
int dx[] = {0,0,1,-1};


int f(int y, int x)
{
    if(y == M-1 && x == N-1) {
        return 1;
    }

    if(d[y][x] != -1) return d[y][x];

    d[y][x] = 0;

    for(int i = 0; i<4; i++) {

        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny >=0 && ny < M && nx >=0 && nx < N){
            if(a[ny][nx] < a[y][x])
                d[y][x] += f(ny,nx);
        }



    }

    return d[y][x];

}


int main()
{
    std::cin>>M>>N;
    for(int i = 0; i<M; i++) {
        for(int j = 0; j<N; j++){
            scanf("%d",&a[i][j]);
            d[i][j] = -1;
        }
    }

    std::cout<<f(0,0)<<std::endl;

    return 0;
}
