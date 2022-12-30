/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    // 开方--二分思路
    int n;
    cin >> n;
    double d_l = 0, h_l = n, mid = 0;
    while (h_l - d_l > 1e-8) {
        mid = (d_l + h_l) / 2;
        if (mid * mid < n)
            d_l = mid;
        else if (mid * mid > n)
            h_l = mid;
        else
            break;
    }
    printf("%.3f", mid);
    return 0;
}
