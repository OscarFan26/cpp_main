/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

/*
小明不喜欢素数，他非常不喜欢，以至于不喜欢两个素数的乘积，他也不喜欢 1    
。其他的正整数他都喜欢。

给你一个整数 
，请你判断小明是不是喜欢这个数。
*/

int main() {
    freopen("nprime.in", "r", stdin);
    freopen("nprime.out", "w", stdout);
    int n;cin >> n;
    // 将这个数拆分成两个素数相乘
    // 遍历所有的素数
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i == n / i) {
                cout << "YES";
                return 0;
            } else {
                for (int j = 2; j <= sqrt(n / i); j++) {
                    if ((n / i) % j == 0) {
                        cout << "YES";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO";
    fclose(stdin);
    fclose(stdout);
    return 0;
}
