#include <iostream>
#include <vector>
#include <string>
#include <regex>

using namespace std;

int main()
{
    std::vector<std::string> v;
    std::string _f = "03";
    v.emplace_back("DAS_01_AA");
    v.emplace_back("DAS_02_AB");
    v.emplace_back("DAS_03_AC");
    v.emplace_back("DAS_04_AD");

    //std::regex reg("02");
    std::regex reg = static_cast<regex>(_f);
    smatch m;

    for(auto& a : v) {
        if( regex_search(a, m, reg) ) {
            cout<<"Find: "<<a<<std::endl;
        }
    }

    return 0;
}
