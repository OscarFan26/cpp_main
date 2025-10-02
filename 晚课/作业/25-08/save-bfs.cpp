/*
    By Oscar Fan
    Date: 2025/8/19
    File: save-bfs.cpp
*/
#include <bits/stdc++.h>
using namespace std;

const int maxn = 1001;
int n;
int sx, sy, fx, fy;
bool mmap[maxn][maxn];
bool visited[maxn][maxn];
queue<pair<int, int>> q;
pair<int, int> pre[maxn][maxn];
vector<pair<int, int>> path;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool bfs() {
  q.push({sx, sy});
  visited[sx][sy] = true;
  while (!q.empty()) {
    auto p = q.front();
    q.pop();
    for (int i = 0; i < 4; i++) {
      int x = p.first + dx[i], y = p.second + dy[i];
      if (x > n || y > n || x < 1 || y < 1 || visited[x][y] || mmap[x][y]) continue;
      visited[x][y] = true;
      pre[x][y]     = p;
      q.push({x, y});
      if (x == fx && y == fy) return true;
    }
  }
  return false;
}

void print(int x, int y) {
  if (x == -1 && y == -1) return;
  path.push_back({x, y});
  print(pre[x][y].first, pre[x][y].second);
}

int main() {
  freopen("save.in", "r", stdin);
  freopen("save.out", "w", stdout);
  cin >> n;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++) {
      char x;
      cin >> x;
      mmap[i][j] = static_cast<bool>(x - '0');
    }
  cin >> sx >> sy >> fx >> fy;
  pre[sx][sy] = {-1, -1};
  bool retval = bfs();
  if (retval) {
    print(fx, fy);
    cout << path.size() - 1 << '\n';
  } else
    cout << "-1";
  fclose(stdin);
  fclose(stdout);
  return 0;
}
