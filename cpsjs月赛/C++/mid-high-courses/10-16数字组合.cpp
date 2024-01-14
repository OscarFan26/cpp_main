/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    // 数字组合：从1到n中组成r位数,各位不同，从小到大排列，输出所有可能
    int n, r;
    cin >> n >> r;
    int a[100];
    for (int i = 0; i < r; i++) {
        a[i] = i + 1;
    }
    while (true) {
        for (int i = 0; i < r; i++) cout << a[i];
        cout << " ";
        int i = r - 1;
        while (i >= 0 && a[i] == n - r + i + 1) {
            i--;
        }
        if (i < 0) {
            break;
        }
        a[i]++;
        for (int j = i + 1; j < r; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
    return 0;
}
