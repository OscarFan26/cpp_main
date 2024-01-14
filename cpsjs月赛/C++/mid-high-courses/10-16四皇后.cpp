/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int chess[14][14], queen[14]; 
int counter, n = 4;        

void placeQueen(int x)
{
    if (x > n) {
        counter++;
        return;
    }
    for (int i = 1; i < 5; i++) {
        bool flag = true;
        for (int j = 1; j < x; j++) {
            if (i == queen[j]) { 
                flag = false;
                break;
            }
            if (abs(j - x) == abs(queen[j] - i))
            { 
                flag = false;
                break;
            }
        }
        if (flag)
        {
            queen[x] = i;
            placeQueen(x + 1);
        }
    }
}
int main() {
    placeQueen(1);
    cout << counter << endl;
    return 0;
}