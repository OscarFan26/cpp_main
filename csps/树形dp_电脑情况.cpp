//
// Created by fzr_o on 2023/8/20.
//
#include <bits/stdc++.h>
using namespace std;

const int maxn = 100000 + 500;
struct edge {
  int v;
  int w;
};
int          n;
vector<edge> g[maxn];
queue<int>   q;
int          dis[maxn], d1[maxn], d2[maxn];
bool         vis[maxn];

int bfs(int u) {  // 求离u最远的点
  int root = u;
  memset(vis, 0, sizeof(vis));
  dis[u] = 0;
  vis[u] = 1;
  q.push(u);
  while (!q.empty()) {
    u = q.front();
    q.pop();
    if (dis[u] > dis[root]) root = u;
    int sz = g[u].size();
    for (int i = 0; i < sz; i++) {
      int v = g[u][i].v;
      int w = g[u][i].w;
      if (vis[v]) continue;
      vis[v] = 1;
      dis[v] = dis[u] + w;
      q.push(v);
    }
  }
  return root;
}

void solve() {
  int t = bfs(1);
  t = bfs(t);   // 更新dis数组为到直径上A点的距离
  for (int i = 1; i <= n; i++) d1[i] = dis[i];
  t = bfs(t); //更新dis数组为到直径上B点的距离
  for (int i = 1; i <= n; i++) d2[i]=dis[i];
  for (int i = 1; i <= n; i++) cout << max(d1[i], d2[i]) << "\n";
}

void init() {
  for (int i = 0; i <= n; i++) {
    g[i].clear();
    dis[0] = -1;
  }
}

int main() {
  while (~scanf("%d", &n)) {
    init();
    for (int i = 2; i <= n; i++) {
      int a,b ;
      cin >> a >> b;
      g[i].push_back({a, b});
      g[a].push_back({i, b});
    }
    solve();
  }
  return 0;
}
