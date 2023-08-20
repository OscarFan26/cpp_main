//
// Created by fzr_o on 2023/8/14.
//
#include <bits/stdc++.h>

using namespace std;
using LL = long long;

int           n, m;
const int     maxn = 305;
vector< int > son[maxn];
int           sco[maxn];
int           dp[maxn][maxn];

void dfs(int x) {
    dp[x][0] = 0;
    for (int i = 0; i < son[x].size(); i++) {
        int y = son[x][i];
        dfs(y);
        for (int t = m; t >= 0; t--) {      // 当前背包体积
            for (int j = t; j >= 0; j--) {  // 选课门数（组内物品）
                if (t - j >= 0) dp[x][t] = max(dp[x][t], dp[x][t - j] + dp[y][j]);
            }
        }
    }
    if (x != 0) {
        for (int t = m; t > 0; t--) { dp[x][t] = dp[x][t - 1] + sco[x]; }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int f;
        cin >> f >> sco[i];
        son[f].push_back(i);
    }

    dfs(0);
    cout << dp[0][m] << endl;
    return 0;
}