#include <bits/stdc++.h>

#define maxn 100010
using namespace std;

int n, m, head[maxn], deep[maxn], p[maxn], fa[maxn], lg[maxn][30];

struct edge {
    int u, v, next;
} edge[maxn << 1];

int cnt;

void dfs1(int u, int fa) {
    deep[u] = deep[fa] + 1;
    lg[u][0] = fa;
    for (int i = 1; (1 << i) <= deep[u]; i++) lg[u][i] = lg[lg[u][i - 1]][i - 1];
    for (int i = head[u]; i; i = edge[i].next) {
        int v = edge[i].v;
        if (v != fa)
            dfs1(v, u);
    }
}

void add(int u, int v) {
    edge[++cnt].u = u;
    edge[cnt].v = v;
    edge[cnt].next = head[u];
    head[u] = cnt;
}

int lca(int u, int v) {
    if (deep[u] < deep[v]) swap(u, v);
    int i = 0;
    for (; (1 << i) <= deep[u];)i++;
    i--;
    for (int j = i; j >= 0; j--)
        if (deep[u] - (1 << j) >= deep[v])
            u = lg[u][j];
    if (u == v) return u;
    for (int j = i; j >= 0; j--)
        if (lg[u][j] != lg[v][j]) {
            u = lg[u][j];
            v = lg[v][j];
        }
    return lg[u][0];
}

void dfs2(int u, int fa) {
    for (int i = head[u]; i; i = edge[i].next) {
        int v = edge[i].v;
        if (v != fa) {
            dfs2(v, u);
            p[u] += p[v];
        }
    }
}

int main() {
    cin >> n >> m;
    int u, v;
    for (int i = 1; i < n; i++) {
        cin >> u >> v;
        add(u, v);
        add(v, u);
    }
    dfs1(1, 0);
    for (int i = 1; i <= m; i++) {
        cin >> u >> v;
        int l = lca(u, v);
        p[u]++;
        p[v]++;
        p[l] -= 2;
    }
    dfs2(1, 0);
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (p[i] == 0) ans += m;
        else if (p[i] == 1) ans++;
    }
    cout << ans << endl;
}

