//
// Created by fzr_o on 2023/8/14.
//
#include <bits/stdc++.h>
using namespace std;

#define N 60005
int n, dp[N][2], father[N];
vector<int> G[N];

void dfs(int root) {
    for (int i = 0; i < G[root].size(); ++i) {
        dfs(G[root][i]);
        dp[root][0] += max(dp[G[root][i]][0], dp[G[root][i]][1]);
        dp[root][1]+=dp[G[root][i]][0];
    }
}

int main() {
    int u, v;
    while (cin >> n) {
        memset(father, -1, sizeof(father));
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n;i++) {
            cin >> dp[i][1];
            G[i].clear();
        }
        while (cin >> u >> v && u && v) {
            father[u] = v;
            G[v].push_back(u);
        }
        int root = 1;
        while (father[root] != -1) root = father[root];
        dfs(root);
        cout << max(dp[root][1], dp[root][0]);
    }
    return 0;
}
