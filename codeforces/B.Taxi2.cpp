#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <iterator>

#define IDBG 0
#define DBG 0


int n;
int sol;
std::vector<int> v;
std::vector<int> v1;
std::vector<int> v2;
std::vector<int> v3;

void input();
void solve();
void calc1();
void calc2();
void calc3();

int main()
{

    input();
    solve();
    std::cout<<sol<<std::endl;
    return 0;
}


void input()
{
    int a;
    if(IDBG) freopen("in2.txt","r",stdin);

    scanf("%d",&n);
    for(int i = 0; i<n; i++) {
        scanf("%d",&a);
        v.push_back(a);
    }
}

void print(std::vector<int>& lv)
{
    std::copy(begin(lv),end(lv),std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;
}

void solve()
{

    std::sort(begin(v),end(v), [](int a, int b){ if(a>b) return 1; else return 0;});
    if(DBG) print(v);

    size_t sz = v.size();

    v.erase(std::remove_if(begin(v),end(v),[](int a) { if(a==4) return 1; else return 0;}),end(v));

    sol = sz - v.size();

    std::copy_if(begin(v),end(v),back_inserter(v1), [](int a) { if(a == 1) return true; else return false;});
    std::copy_if(begin(v),end(v),back_inserter(v2), [](int a) { if(a == 2) return true; else return false;});
    std::copy_if(begin(v),end(v),back_inserter(v3), [](int a) { if(a == 3) return true; else return false;});

    calc3();
    calc2();
    calc1();

    sol += v3.size();
    sol += v2.size();
}

void calc2()
{
    if(v2.size() > 0 ) {
        sol +=(v2.size()/2);
        v2.erase(std::begin(v2)+(v2.size()%2), std::end(v2));
    }
}

void calc3()
{
    int sz3 = v3.size();
    int sz1 = v1.size();

    if(sz3 == 0 || sz1 == 0) return;

    if(sz3 > sz1 ) {
        v1.erase(std::begin(v1), std::end(v1));
        v3.erase(std::begin(v3)+(sz3-sz1), std::end(v3));
        sol+=sz1;
    }else if(sz3 < sz1){
        v3.erase(std::begin(v3), std::end(v3));
        v1.erase(std::begin(v1)+(sz1-sz3), std::end(v1));
        sol+=sz3;
    }else{
        sol += sz3;
        v3.erase(std::begin(v3), std::end(v3));
        v1.erase(std::begin(v1), std::end(v1));
    }
}

void calc1()
{
    int sz1 = v1.size();
    int d = 0;

    if(v2.size() > 0 && sz1 > 0) {

        if(sz1 > 2) d = (sz1 - 2); else d = 0;
        v2.erase(std::begin(v2), std::end(v2));
        v1.erase(std::begin(v1), std::end(v1)-d); 
        sol +=1;
    }

    if(v1.size() > 0 ) {
        sol += (v1.size()/4);
    }

    if(v1.size()%4 != 0) {
        sol+=1;
    }
}
