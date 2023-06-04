
// Created By OscarFan
// TIME:  2023/6/4 17:45:03
// NAME:  最小生成树prime.cpp

#include <bits/stdc++.h>

using namespace std;

#define maxn 2001

int g[maxn][maxn], dis[maxn], visit[maxn], n, m, ans;

void prim() {
    visit[1] = 1;
    memset(dis, 0x3f, sizeof(dis));
    dis[1] = 0;
    for (int i = 2; i <= n; i++) dis[i] = g[1][i];
    for (int i = 2; i <= n; i++) {
        int minn = 0x3f3f3f3f, pos;
        for (int j = 1; j <= n; j++) {
            if (!visit[j] && dis[j] < minn) {
                minn = dis[j];
                pos = j;
            }
        }
        ans += minn;
        visit[pos] = 1;
        for (int j = 1; j <= n; j++) {
            if (!visit[j] && dis[j] > g[pos][j]) dis[j] = g[pos][j];
        }
    }
}

int main() {
    cin >> n >> m;
    memset(g, 0x3f, sizeof(g));
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u][v] = g[v][u] = w;
    }
    for (int i = 1; i <= n; i++) g[i][i] = 0;
    prim();
    cout << ans << endl;
    return 0;
}