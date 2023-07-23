#include <iostream>
#include <queue>
using namespace std;

const int M = 20005;
const int N = 1005;
const int INF = INT_MAX;

struct Edge {
  int v, w, next;
} edge[M];

int head[N];
int n;
bool vis[N];
int times[N], low[N];

int spfa(int s) {
  queue<int> q;
  for (int i = 1; i <= n; i++) {
    vis[i] = false;
    low[i] = INF;
    times[i] = 0;
  }
  low[s] = 0;
  times[s]++;
  q.push(s);
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    vis[u] = false;
    for (int k = head[u]; k != -1; k = edge[k].next) {
      int v = edge[k].v, w = edge[k].w;
      if (low[v] > low[u] + w) {
        low[v] = low[u] + w;
        if (!vis[v]) {
          vis[v] = true;
          q.push(v);
          if (times[v]++ > v) return -1;
        }
      }
    }
  }
  if (low[n] == INF) return -2;
  return low[n];
}

void addEdge(int u, int v, int w, int& k) {
  edge[k] = {v, w, head[u]};
  head[u] = k++;
}

int main() {
  int ml, md;
  while (scanf("%d%d%d", &n, &ml, &md) != EOF) {
    memset(head, -1, sizeof(head));
    int u, v, w;
    int tot = 0;
    for (int i = 0; i < ml; i++) {
      cin >> u >> v >> w;
      addEdge(u, v, w, tot);
    }
    for (int i = 0; i < md; i++) {
      cin >> u >> v >> w;
      addEdge(v, u, -w, tot);
    }
    for (int i = 1; i < n; i++) addEdge(i + 1, i, -1, tot);
    cout << spfa(1);
  }
  return 0;
}
