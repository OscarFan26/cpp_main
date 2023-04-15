/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;
int dp[20];

int f(int n) {
    if (dp[n] != -1) return dp[n];
    int s = 1 << 30;
    for (int i = 0; i < n; i++) s = min(s, 2 * f(i) + int(pow(2, n - i)) - 1);
    dp[n] = s;
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    dp[1] = 1;
    cout << f(n);
    return 0;
}
