/*
  S     D     E
------------------
Step-1: Move n-1 dices from S to E using D
Step-2: Move the n'th disc from S to D
Step-3: MOve n-1 discs from E to D using S
*/

#include <iostream>

using namespace std;

void hanoi(char from, char to, char via, int n)
{
    if (n <= 0) {
        return;
    }

    hanoi(from, via , to, n-1);
    cout<<"Move Disc "<<n<<" From "<< from<<" To "<<to<<endl;
    hanoi(via, to, from, n-1);
}

int main()
{
    int n;
    cin >> n;

    hanoi('S','D', 'E', n);
    return 0;
}