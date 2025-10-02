/*
    By Oscar Fan
    Date: 2025/4/25
    File: 部落卫队.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<pair<int, int>> enemies;
bool current[101];
bool best_solution[101];
int max_size = 0;

bool is_valid(int person) {
  for (auto &e: enemies)
    if ((e.first == person && current[e.second]) || (e.second == person && current[e.first])) return false;
  return true;
}

void backtrack(int start, int count) {
  if (count > max_size) {
    max_size = count;
    for (int i = 1; i <= n; i++) best_solution[i] = current[i];
  }
  for (int i = start; i <= n; i++) {
    if (is_valid(i)) {
      current[i] = true;
      backtrack(i + 1, count + 1);
      current[i] = false;
    }
  }
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    enemies.push_back({u, v});
  }
  backtrack(1, 0);
  cout << max_size << '\n';
  for (int i = 1; i <= n; i++) cout << best_solution[i] << " ";
  return 0;
}