/*

*/
#include <bits/stdc++.h>
#define maxn 40010
using namespace std;
struct Edge {
    int v, w, next;
} edge[maxn << 1];
//  n节点个数，m次查询
int  n, m, u, v, w;
int  cnt, head[maxn];
void add(int u, int v, int w) {
    cnt++;
    edge[cnt].v    = v;
    edge[cnt].w    = w;
    edge[cnt].next = head[u];
    head[u]        = cnt;
}
//              dep[i]:i在第几层
int  p[maxn][25], dep[maxn], dis[maxn];  // dis[i]:i到根节点的距离
void dfs(int u, int fa) {                // father
    dep[u]  = dep[fa] + 1;
    p[u][0] = fa;                        // u向上走2^0到达的点，就是父节点
    for (int i = head[u]; i; i = edge[i].next) {
        int v = edge[i].v, w = edge[i].w;
        if (v == fa) continue;
        dis[v] = dis[u] + w;
        dfs(v, u);  // dfs(2,1)
    }
}
void init() {
    for (int j = 1; j < 21; j++)
        for (int i = 1; i <= n; i++) p[i][j] = p[p[i][j - 1]][j - 1];
}
int lca(int x, int y) {
    if (dep[x] < dep[y]) swap(x, y);
    // 1蹦到同一层，dep[x]==dep[y]
    for (int i = 21; i >= 0; i--) {
        if (dep[x] - (1 << i) >= dep[y]) x = p[x][i];
    }
    if (x == y) return x;
    // 同层一起蹦
    for (int i = 21; i >= 0; i--) {  // i=1,0
        if (p[x][i] != p[y][i]) {
            x = p[x][i];
            y = p[y][i];
        }
    }
    return p[x][0];  // 返回父节点
}
int main() {
    cin >> n >> m;
    for (int i = 1; i < n; i++) {
        cin >> u >> v >> w;
        add(u, v, w);
        add(v, u, w);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++) cout << dep[i] << ' ' << p[i][0] << ' ' << dis[i] << endl;
    init();
    // lca
    for (int i = 1; i <= m; i++) {
        cin >> u >> v;
        int LCA = lca(u, v);
        cout << dis[u] + dis[v] - 2 * dis[LCA] << endl;
    }
    return 0;
}
