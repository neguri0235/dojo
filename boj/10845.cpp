#include <iostream>
#include <queue>


int n;
std::string str;
void solve();

int main()
{

    std::cin>>n;
    solve();
    return 0;
}


void solve()
{
    std::queue<int>q;
    int a;

    while(n--){

        std::cin>>str;
        if(str == "push") {
            std::cin>>a;
            q.push(a);
        }else if(str == "front"){
            if(q.size() == 0) { 
                std::cout<<"-1"<<std::endl;
            }
            else {
                std::cout<<q.front()<<std::endl;
            }

        }else if(str == "back"){
            if(q.size() == 0) { 
                std::cout<<"-1"<<std::endl;
            }
            else {
                std::cout<<q.back()<<std::endl;
            }

        }else if(str == "size"){
            std::cout<<q.size()<<std::endl;
        }else if(str == "empty"){
            if(q.empty() == true) std::cout<<1<<std::endl;
            else std::cout<<0<<std::endl;

        }else if(str == "pop"){
            if(q.size() == 0) { 
                std::cout<<"-1"<<std::endl;
            }
            else {
                std::cout<<q.front()<<std::endl;
                q.pop();
            }

        }else{

        }


    }

}
