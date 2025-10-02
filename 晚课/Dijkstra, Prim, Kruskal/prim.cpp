#include <bits/stdc++.h>
using namespace std;

const int maxn = 20005;
const int INF  = 0x3f3f3f3f;
int n, m;
int dis[maxn];
bool vis[maxn];

// 需要用vector的可变长度初始化来卡洛谷2e5的MLE

int prim(vector<vector<int>> &e) {
  int ans = 0, cnt = 1;
  memset(dis, INF, sizeof dis);
  dis[1] = 0;
  vis[1] = true;
  for (int v = 1; v <= n; v++)
    if (v != 1) dis[v] = e[1][v];
  while (true) {
    int mindist = INF, u = -1;
    for (int i = 1; i <= n; i++) {
      if (!vis[i] && dis[i] < mindist) {
        mindist = dis[i];
        u       = i;
      }
    }
    if (u == -1) break;
    ans += mindist;
    vis[u] = true;
    cnt++;
    for (int v = 1; v <= n; v++)
      if (!vis[v] && e[u][v] < dis[v]) dis[v] = e[u][v];
  }
  return cnt == n ? ans : -1;
}

int main() {
  cin >> n >> m;
  vector<vector<int>> e(n + 1, vector<int>(n + 1, INF));
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    if (u == v) continue;
    if (w < e[u][v]) {
      e[u][v] = w;
      e[v][u] = w;
    }
  }
  int ans = prim(e);
  if (ans == -1) cout << "orz";
  else
    cout << ans;
  return 0;
}