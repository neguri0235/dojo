#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

template<typename T>
auto compute_waiting_times(vector<T>& service_times)
{
    vector<T> W(service_times.size());
    W[0] = 0;
    
    for(auto i = 1; i< service_times.size(); i++){
	W[i] = W[i-1] + service_times[i-1];
    }
    return W;
}

template<typename T>
void print_vector(vector<T>& V)
{
    for(auto& i : V){
	cout.width(2);
	cout<<i<<' ';
    }
    cout<<'\n';
}

template<typename T>
void compute_and_print_wiating_times(vector<T>& service_times)
{
    auto waiting_times = compute_waiting_times<int>(service_times);

    cout<<" - 처리시간"<<'\n';
    print_vector<T>(service_times);

    cout<<" - 대기시간"<<'\n';
    print_vector<T>(waiting_times);

    auto ave_waiting_times = accumulate(waiting_times.begin(), waiting_times.end(), 0.0) / waiting_times.size();
    cout<<" - 평균대기시간: "<< ave_waiting_times;
    cout<<'\n';
}

int main(int argc, char* argv[])
{
    vector<int>service_times {8, 1, 2, 4, 9, 2, 3, 5};;
    cout<<"[ 처음 일 처리시간 & 대기 시간 ]"<<'\n';
    compute_and_print_wiating_times<int>(service_times);

    sort(service_times.begin(), service_times.end());
    cout<<'\n';
    cout<<"[ 정렬 후 일 처리 시간 & 대기시간 ]"<<'\n';
    compute_and_print_wiating_times<int>(service_times);

    return 0;
}
