#include <bits/stdc++.h>
#define maxn 100005
using namespace std;
int n, m, cnt, head[maxn], dis[maxn], dep[maxn], p[maxn][25];

struct node {
    int u, v, w, next;
} edge[maxn << 1];

void add(int u, int v, int w) {
    edge[++cnt].v  = v;
    edge[cnt].w    = w;
    edge[cnt].next = head[u];
    head[u]        = cnt;
}

void dfs(int u, int fa) {
    p[u][0] = fa;
    dep[u]  = dep[fa] + 1;
    for (int i = head[u]; i; i = edge[i].next) {
        int v = edge[i].v;
        if (v == fa) continue;
        dis[v] = dis[u] + edge[i].w;
        dfs(v, u);
    }
}
int lca(int x, int y) {
    if (dep[x] < dep[y]) swap(x, y);
    for (int j = 24; j >= 0; j--) {
        if (dep[x] - (1 << j) >= dep[y]) { x = p[x][j]; }
    }
    if (x == y) return x;
    for (int j = 24; j >= 0; j--) {
        if (p[x][j] != p[y][j]) {
            x = p[x][j];
            y = p[y][j];
        }
    }
    return p[x][0];
}
int main() {
    cin >> n >> m;
    for (int i = 1; i < n; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        add(u, v, w);
        add(v, u, w);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++) { cout << dis[i] << endl; }
    for (int j = 1; (1 << j) <= n; j++) {
        for (int i = 1; i <= n; i++) { p[i][j] = p[p[i][j - 1]][j - 1]; }
    }
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        cout << dis[x] + dis[y] - 2 * dis[lca(x, y)];
    }
    return 0;
}

/*
12 3
1 2 5
1 3 6
2 4 7
2 5 8
3 6 9
4 7 1
4 8 2
6 9 3
6 10 4
9 11 3
9 12 4

*/
