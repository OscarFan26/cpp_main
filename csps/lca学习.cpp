/*
1、建立树
n
n-1条边

*/
#include <bits/stdc++.h>
#define maxn 100005
using namespace std;
int n, p[maxn][25], cnt, head[maxn];
struct Edge {
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

    for (int i = head[u]; i; i = edge[i].next) {
        int v = edge[i].v;
        if (v == fa) continue;
        dfs(v, u);
    }
}
int lca(int x, int y) {}
int main() {
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        add(u, v, w);
        add(v, u, w);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++) cout << i << ' ' << p[i][0] << endl;
    for (int j = 1; (1 << j) <= n; j++) {  // j<=21
        for (int i = 1; i <= n; i++) p[i][j] = p[p[i][j - 1]][j - 1];
    }
    for (int j = 0; j <= 2; j++) cout << p[3][j] << endl;
    return 0;
}
