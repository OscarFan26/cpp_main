/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*猜数字
        输入一个数，代表要猜的数字
        按照二分模拟猜的过程
        输出需要猜几次(向下取整)
    */
    int n, target = 0, times = 0;
    int d_l = 0, h_l = 100, mid = 0;
    cin >> n;
    while (target != n) {
        mid = (d_l + h_l) / 2;
        target = mid;
        if (target < n) {
            times++;
            d_l = mid+1;
        }
        else if (target > n) {
            times++;
            h_l = mid-1;
        } else if (target == n)
            times++;
    }
    cout << times;
    return 0;
}
