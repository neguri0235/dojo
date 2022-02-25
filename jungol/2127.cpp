#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<unsigned long long>> matrix;
const long long mod = 998244353;

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    if (a < b) {
        unsigned long long t = a;
        a = b;
        b = t;
    }

    while(b > 0){
        unsigned long long n = a%b;
        a = b;
        b = n;
    }
    return a;
}

matrix operator * (const matrix &a, const matrix &b) {
    unsigned long long n = a.size();
    matrix c(n, vector<unsigned long long>(n));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
                //c[i][j] += (a[i][k]%mod) * (b[k][j]%mod);
                c[i][j] += (a[i][k]) * (b[k][j]);
            }
            c[i][j] %= mod;
        }
    }
    return c;
}

unsigned long long fibo(unsigned long long n1, unsigned long long n2, unsigned long long n)
{
    matrix ans = {{1, 0}, {0, 1}};
    matrix a = {{n1, n2}, {1, 0}};

    while (n > 0) {
        if (n % 2 == 1) {
            ans = ans * a;
        }
        a = a * a;
        n /= 2;
    }
    return ans[0][1];
}

int main() {
    ios_base::sync_with_stdio(false);
    int tc;
    cin>>tc;

    while(tc--){
        unsigned long long a, b, n, m;
        cin>>a>>b>>n>>m;
        unsigned long long g1 = fibo(a,b,n);
        unsigned long long g2 = fibo(a,b,m);
        cout<<gcd(g1,g2)%mod<<'\n';
    }

    return 0;
}