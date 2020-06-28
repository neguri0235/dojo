#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    string str;
    int io = 0, jo = 0;
    cin>>str;
    for(size_t i = 0; i<str.size()-2; i++){
	if(str[i] =='I' && str[i+1] == 'O' && str[i+2] == 'I') io +=1;
	if(str[i] =='J' && str[i+1] == 'O' && str[i+2] == 'I') jo +=1;
    }
    cout<<jo<<'\n'<<io<<'\n';
    return 0;
}
