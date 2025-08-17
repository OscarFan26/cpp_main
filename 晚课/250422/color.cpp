/*
    By Oscar Fan
    Date: 2025/4/25
    File: color.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int n, k, m;
vector<vector<int>> graph;
vector<int> colors;
int total = 0;

bool isSafe(int vertex, int color) {
  for (int neighbor: graph[vertex])
    if (colors[neighbor] == color) return false;
  return true;
}

void dfs(int vertex) {
  if (vertex == n + 1) {
    total++;
    return;
  }
  for (int c = 1; c <= m; ++c) {
    if (isSafe(vertex, c)) {
      colors[vertex] = c;
      dfs(vertex + 1);
      colors[vertex] = 0;
    }
  }
}

int main() {
  freopen("color.in", "r", stdin);
  freopen("color.out", "w", stdout);
  cin >> n >> k >> m;
  graph.resize(n + 1);
  colors.resize(n + 1, 0);
  for (int i = 0; i < k; ++i) {
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  dfs(1);
  cout << total << '\n';
  fclose(stdin);
  fclose(stdout);
  return 0;
}