#include <iostream>
#include <vector>
#include <deque>


using namespace std;

long long N,K,a,b,order;
long long sum;

int main()
{
    #ifdef __CB__
    freopen("17612.txt","r",stdin);
    #endif // __CB__
    ios::sync_with_stdio(false);


    cin>>N>>K;

    deque<pair<int,int>> deq;
    vector<int> remain_time(K,0);
    vector<int> person(K,0);

    for(int i = 0; i<N; i++){
        cin>>a>>b;
        deq.push_back(make_pair(a,b));
    }

    while (order != N ) {

        // add person
        for(int i = 0; i<remain_time.size(); i++){
            if(remain_time[i] == 0 && deq.empty() == false) {
                auto data = deq.front(); deq.pop_front();
                person[i] = data.first;
                remain_time[i] = data.second;
            }
        }


        for(int i = 0; i<remain_time.size(); i++){
            --remain_time[i];
        }

        for(int i = remain_time.size()-1; i >=0; i--){
            if(remain_time[i] == 0) {
                order++;
                sum += order * person[i];
            }
        }
   }
    cout<<sum<<endl;
    return 0;
}

