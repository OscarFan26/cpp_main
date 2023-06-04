/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define maxn 100005

struct Edge {
    int u, v, w, next;
} edge[maxn << 1];
int  cnt, head[maxn];
void add(int u, int v, int w) {
    edge[++cnt] = (Edge){ u, v, w, head[u] };
    head[u]     = cnt;
}
struct node {
    int u, w;

    bool operator  <  (const node& r) const { return r.w < w; }
};
int n, m, dis[maxn], vis[maxn];

void dijkstra() {
    memset(dis, 0x3f, sizeof(dis));
    dis[1] = 0;
    priority_queue< node > q;
    q.push((node){ 1, 0 });
    while (!q.empty()) {
        int u = q.top().u, w = q.top().w;
        q.pop();
        if (vis[u]) continue;
        vis[u] = 1;
        for (int i = head[u]; i; i = edge[i].next) {
            int v = edge[i].v, w = edge[i].w;
            if (!vis[v] && dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w;
                q.push((node){ v, dis[v] });
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        add(u, v, w);
        add(v, u, w);
    }
    dijkstra();
    for (int i = 1; i <= n; i++) cout << dis[i] << ' ';
    return 0;
}
