#include <iostream>
#include <deque>
#include <vector>
#include <set>


using namespace std;

typedef unsigned long long LL;

#define max_ 1000000001

LL s,t;
set<LL>V;

int main()
{
    cin>>s>>t;


    if (s == t) {
        cout<<0<<endl;
    }else{

        deque<pair<LL,string>> deq;
        deq.push_back(make_pair(s,""));

         V.insert(s);

        while(deq.empty() == false) {
            auto r = deq.front(); deq.pop_front();

            if(r.first == t) {

                cout<<r.second<<endl;
                return 0;
            }

            LL a = r.first * r.first;

            if(a < max_) {

                auto ret = V.insert(a);
                if(ret.second == true) {
                    deq.push_back(make_pair(a,r.second + '*'));
                }
            }


            a = r.first + r.first;


            if(a < max_) {
                auto ret = V.insert(a);
                if(ret.second == true) {
                    deq.push_back(make_pair(a, r.second + '+'));
                }


            }

            a = r.first - r.first;
            auto ret = V.insert(a);
            if(ret.second == true) {
                deq.push_back(make_pair(a,r.second +'-'));
            }

            if(r.first) {
                a = 1;
                ret = V.insert(a);
                if(ret.second == true) {
                    deq.push_back(make_pair(a, r.second +'/'));
                }
            }
        }

        cout<<-1<<endl;
    }

    return 0;
}
