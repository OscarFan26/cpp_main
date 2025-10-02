/*
    By Oscar Fan
    Date: 2025/8/19
    File: turn-bfs.cpp
*/
#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 1001;
int w, h;
int sx, sy, fx, fy;
bool grid[maxn][maxn];
bool visited[maxn][maxn];
int min_turns = INT_MAX;
vector<vector<pair<int, int>>> pre;
vector<pair<int, int>> path;
queue<pair<int, int>> q;
bool found;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

void get_path(pair<int, int> pos) {
  if (pos.first == -1 && pos.second == -1) return;
  path.push_back(pos);
  get_path(pre[pos.first][pos.second]);
}

int count_turns() {
  get_path({fx, fy});
  reverse(path.begin(), path.end());
  if (path.size() < 3) return 0;
  int cnt          = 0;
  bool if_vertical = false;
  if (path[0].first == path[1].first) if_vertical = true;
  for (int i = 2; i < path.size(); i++) {
    if (path[i].first == path[i - 1].first) {
      cnt += (if_vertical ? 0 : 1);
      if_vertical = true;
    } else {
      cnt += (if_vertical ? 1 : 0);
      if_vertical = false;
    }
  }
  path.clear();
  return cnt;
}

void bfs() {
  visited[sx][sy] = true;
  q.push({sx, sy});
  pre[sx][sy] = {-1, -1};
  while (!q.empty()) {
    auto p = q.front();
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];
      if (nx <= 0 || ny <= 0 || nx > w || ny > h || visited[nx][ny] || grid[nx][ny]) continue;
      visited[nx][ny] = true;
      pre[nx][ny] = p;
      q.push({nx, ny});
      if (nx == fx && ny == fy) min_turns = min(min_turns, count_turns()), found = true, visited[nx][ny] = false;
    }
  }
}

int main() {
  freopen("turn.in", "r", stdin);
  freopen("turn.out", "w", stdout);
  cin >> w >> h;
  pre.resize(w + 1, vector<pair<int, int>>(h + 1));
  for (int i = 1; i <= w; i++)
    for (int j = 1; j <= h; j++) {
      int x;
      cin >> x;
      if (x == 1) grid[i][j] = true;
      else
        grid[i][j] = false;
    }
  cin >> sx >> sy >> fx >> fy;
  bfs();
  if (!found) cout << "-1";
  else cout << min_turns << '\n';
  fclose(stdin);
  fclose(stdout);
  return 0;
}
