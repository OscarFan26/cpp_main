#include <bits/stdc++.h>
using namespace std;

#define maxn 50010

struct node {
    int u, v, next;
} edge[maxn << 1];

int deep[maxn], head[maxn], cnt, lp[maxn][30];
int p[maxn];

void addedge(int u, int v) {
    edge[++cnt].u  = u;
    edge[cnt].v    = v;
    edge[cnt].next = head[u];
    head[u]        = cnt;
}

void dfs(int u, int fa) {
    deep[u]  = deep[fa] + 1;
    lp[u][0] = fa;
    for (int i = 1; (1 << i) <= deep[u]; i++) lp[u][i] = lp[lp[u][i - 1]][i - 1];
    for (int i = head[u]; i; i = edge[i].next) {
        int v = edge[i].v;
        if (v != fa) dfs(v, u);
    }
}

int lca(int a, int b) {
    if (deep[a] < deep[b]) swap(a, b);
    int lg = 0;
    for (; (1 << lg) <= deep[a]; lg++)
        ;
    lg--;
    for (int i = lg; i >= 0; i--)
        if (deep[a] - (1 << i) >= deep[b]) a = lp[a][i];
    if (a == b) return a;
    for (int i = lg; i >= 0; i--) {
        if (lp[a][i] != lp[b][i]) {
            a = lp[a][i];
            b = lp[b][i];
        }
    }
    return lp[a][0];
}

void dfs2(int u, int fa) {
    for (int i = head[u]; i; i = edge[i].next) {
        int v = edge[i].v;
        if (v != fa) {
            dfs2(v, u);
            p[u] = p[u] + p[v];
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        addedge(u, v);
        addedge(v, u);
    }
    dfs(1, 0);  //  建立树
    while (m--) {
        int u, v;

        cin >> u >> v;
        p[u]++;
        p[v]++;
        int lc = lca(u, v);
        // cout << "lca:" << lc << endl;
        p[lc]--;
        p[lp[lc][0]]--;
    }
    dfs2(1, 0);
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, p[i]);
    cout << ans << endl;
    return 0;
}
