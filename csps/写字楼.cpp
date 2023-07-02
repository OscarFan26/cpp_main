#include <bits/stdc++.h>
typedef long long          ll;
typedef unsigned long long LL;
using namespace std;
const int    INF = 0x3f3f3f3f;
const double eps = 0.0000000001;
const int    N   = 100000 + 10;
struct node {
    int  to, next, w;
    bool operator<(const node& a) const { return w > a.w; }
} edge[N * 2];
int  t;
int  head[N];
int  vis[N], dis[N];
int  n;
void init() {
    memset(vis, 0, sizeof(vis));
    memset(head, -1, sizeof(head));
    t = 0;
    for (int i = 0; i < N; i++) dis[i] = INF;
}
void add(int u, int v, int w) {
    edge[t].to   = v;
    edge[t].w    = w;
    edge[t].next = head[u];
    head[u]      = t++;
}
int Dijkstra(int x, int y) {
    memset(dis, INF, sizeof(dis));
    dis[x] = 0;
    node t1, t2;
    t1.to = x;
    priority_queue< node > q;
    q.push(t1);
    memset(vis, 0, sizeof(vis));
    while (!q.empty()) {
        t1 = q.top();
        q.pop();
        int u = t1.to;
        if (vis[u] == 1) continue;
        vis[u] = 1;
        for (int i = head[u]; i != -1; i = edge[i].next) {
            int v  = edge[i].to;
            int tt = 0;
            if (edge[i].w >= y) tt = 1;
            if (vis[v] == 0 && dis[v] > dis[u] + tt) {
                dis[v] = dis[u] + tt;
                t2.to  = v;
                t2.w   = dis[v];
                q.push(t2);
            }
        }
    }
    return dis[n];
}
int main() {
    int k, p;
    while (scanf("%d%d%d", &n, &p, &k) != EOF) {
        init();
        int maxx = 0;
        for (int i = 0; i < p; i++) {
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            add(u, v, w);
            add(v, u, w);
            maxx = max(maxx, w);
        }
        int low  = 0;
        int high = maxx;
        int ans  = 0;
        while (low <= high) {
            int mid = (low + high) >> 1;
            // cout << Dijkstra(1, mid) << endl;
            if (Dijkstra(1, mid) <= k) { high = mid - 1; }
            else {
                ans = mid;
                low = mid + 1;
            }
        }
        if (low > maxx) {
            cout << -1 << endl;
            continue;
        }
        cout << ans << endl;
    }
}
