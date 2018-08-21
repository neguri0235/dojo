#include <iostream>
#include <string>

using namespace std;

int d[505][505];
string s;

int main()
{
    cin>>s;
    int len = s.length();
    s = " "+s;

    for(int j = 2; j<=len; j++){
        for(int i = j-1; i>=1; i--){
            if((s[i] == 'a' && s[j] =='t') || (s[i] == 'g' && s[j] == 'c')) {
                d[i][j] = d[i+1][j-1]+2;
            }


            int max(0);

            for(int k = 1; k<= (j-1); k++){

                int temp = d[i+( (j-i)+1 - k)][j] + d[i][j-k];
                if(max < temp) max = temp;

            }

            d[i][j] = std::max(d[i][j],max);
        }


    }

    cout<<d[1][len];


    return 0;
}
