/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    // 找零钱 动态规划！
    int n, m;
    cin >> n >> m;
    int value[999] = {};
    for (int i = 0; i < m; i++)
        cin >> value[i];
    sort(value, value + m);
    int dp[999] = {};
    for (int i = 1; i <= n; i++) {
        dp[i] = 999;
        for (int j = 0; j < m; j++) {
            if (i >= value[j])
                dp[i] = min(dp[i], dp[i - value[j]] + 1);
        }
    }
    cout << dp[n];
    return 0;
}
