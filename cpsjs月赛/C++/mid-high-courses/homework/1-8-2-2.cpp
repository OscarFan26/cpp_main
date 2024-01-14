
/**
 * @file 1-8-2-2.cpp
        warning: decomposition declarations are a C++17 extension [-Wc++17-extensions]
 * @author Oscarfan   (oscarf.top)
 * @brief   WARNING: THIS FILE IS USING C++23 STD!
 * @version 0.1
 * @date 2023-01-10
 *
 * @copyright Copyright (c) 2023                MIT LICENSE
 *
 */
#include <bits/stdc++.h>  
using namespace std;
using pii = pair<int, int>;  // 每个物品的价格和重要度

int main() {
    int n, m;
    cin >> n >> m;
    vector<pii> items;
    for (int i = 0; i < m; ++i) {
        int v, p;
        cin >> v >> p;
        items.emplace_back(v, p);
    }
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    for (int i = 1; i <= m; ++i) {
        auto [v, p] = items[i - 1];
        for (int j = 1; j <= n; ++j) {
            if (j < v)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v] + v * p);
        }
    }
    int          k = 0;
    vector<bool> selected(m);
    for (int i = m, j = n; i >= 1; --i) {
        if (dp[i][j] > dp[i - 1][j]) {
            selected[i - 1] = true;
            k++;
            j -= items[i - 1].first;
        }
    }
    cout << dp[m][n] << "\n";

    return 0;
}