#ifdef cpp1z
#include <string>
#include <filesystem>
#else
#include <sys/types.h>
#include <dirent.h>
#endif

#include <iostream>
#include <vector>
using namespace std;


#ifdef cpp1z
namespace fs = std::filesystem;

int main()
{
	std::string path = "/home/jaehoc";
	for(auto& p : fs::directory_iterator(path)) {
		std::cout<<p<<std::endl;}
	return 0;
}
#else

void read_directory(const std::string& name, std::vector<std::string>& v)
{
	DIR* dirp = opendir(name.c_str());
	struct dirent * dp;
	while ((dp = readdir(dirp)) != NULL) {
		v.push_back(dp->d_name);
	}
	closedir(dirp);
}

int main()
{
	std::string name = "/home/jaehoc";
	std::vector<std::string> v;
	read_directory(name,v);
	std::cout<<v.size()<<endl;
	for(auto& a : v) {
		std::cout<<a<<std::endl;
	}

	return 0;
}

#endif
