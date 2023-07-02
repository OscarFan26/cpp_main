/*

*/
#include <bits/stdc++.h>
#define maxn 40010
using namespace std;
int n, m;
struct node {
    int v, w;
};
vector< node > g[maxn];
int            dis[maxn], father[maxn], dep[maxn];
void           dfs(int u, int fa, int deep) {
    father[u] = fa;
    dep[u]    = deep;
    for (int i = 0; i < g[u].size(); i++) {
        node t = g[u][i];
        int  v = t.v, w = t.w;
        if (v == fa) continue;
        dis[v] = dis[u] + w;
        dfs(v, u, deep + 1);  // dfs(4,2,2)
    }
}
int  p[maxn][30];
void init() {
    for (int i = 1; i <= n; i++)             // i节点
        for (int j = 0; (1 << j) <= n; j++)  // 上跳2^j
            p[i][j] = -1;
    memset(p, -1, sizeof(p));
    // i点，向上跳2^j，是哪个点
    for (int i = 1; i <= n; i++) p[i][0] = father[i];
    // g[x][i]= g [  g[x][i-1] ][i-1]
    for (int i = 1; i <= n; i++) {
        for (int j = 1; (1 << j) <= n; j++)
            if (p[i][j - 1] != -1) p[i][j] = p[p[i][j - 1]][j - 1];
    }
}
int lca(int x, int y) {  // 5 6   ?
    if (dep[x] < dep[y]) swap(x, y);
    for (int i = 20; i >= 0; i--) {
        if (dep[x] - (1 << i) >= dep[y]) x = p[x][i];
    }
    if (x == y) return x;
    for (int i = 20; i >= 0; i--) {  // i=0
        if (p[x][i] != p[y][i] && p[x][i] != -1) {
            x = p[x][i];
            y = p[y][i];
        }
    }
    return father[x];
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> m;  // n=4
        for (int i = 1; i <= n; i++) g[i].clear();

        for (int i = 1; i < n; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            // 建立树,3种方法，二维数组，edge，vector
            g[u].push_back((node){ v, w });
            g[v].push_back((node){ u, w });
        }
        // 树的的根节点是1
        dis[1] = 0;
        dfs(1, -1, 0);  // 建树
        init();
        while (m--) {
            int x, y;
            cin >> x >> y;
            int l = lca(x, y);
            // cout<<x<<' '<<y<<' '<<l<<endl;
            cout << dis[x] + dis[y] - 2 * dis[l] << endl;
        }
    }

    return 0;
}
