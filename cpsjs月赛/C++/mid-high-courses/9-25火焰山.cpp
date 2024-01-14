/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    string numbers;
    cin >> numbers;
    int sticks[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int sum = 0;
    for (char c : numbers)
    {
        sum += sticks[int(c - '0')];
    }
    cout << sum << endl;
    return 0;
}
