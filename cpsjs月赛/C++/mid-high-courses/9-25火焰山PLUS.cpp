/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <iostream>
using namespace std;
int sticks[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int cnt_sticks(int n){
    int sum = 0;
    if (n == 0)
    {
        return sticks[0];
    }
    while (n > 0)
    {
        sum += sticks[n % 10];
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) {
                if (cnt_sticks(i) + cnt_sticks(j) + cnt_sticks(i+j) == n - 4) {
                    cnt++;
                }
            }
        }
    
    cout << cnt << endl;
    return 0;
}
