/*
    By Oscar Fan
    Date: 2025/8/19
    File: area-bfs.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
bool vis[10][10];// visited also includes the grid
queue<pair<int, int>> q;

void bfs() {
  q.push({0, 0});
  vis[0][0] = true;
  while (!q.empty()) {
    auto p = q.front();
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];
      if (nx < 0 || ny < 0 || nx >= 10 || ny >= 10 || vis[nx][ny]) continue;
      vis[nx][ny] = true;
      q.push({nx, ny});
    }
  }
}

int main() {
  freopen("area.in", "r", stdin);
  freopen("area.out", "w", stdout);
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++) cin >> vis[i][j];
  bfs();
  int cnt = 0;
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      if (!vis[i][j]) cnt++;
  cout << cnt << endl;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
