/*
    By Oscar Fan
    Date: 2025/4/25
    File: migong.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int n;
int mmap[11][11];
bool visited[11][11];
int cnt;
int x, y;
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void search() {
  if (x == n - 1 && y == 0) {
    cnt++;
    return;
  }
  for (int i = 0; i < 8; i++) {
    x += dx[i];
    y += dy[i];
    if (x >= n || y >= n || x < 0 || y < 0 || mmap[y][x] || visited[y][x]) {
      x -= dx[i];
      y -= dy[i];
      continue;
    }
    visited[y][x] = true;
    search();
    visited[y][x] = false;
    x -= dx[i];
    y -= dy[i];
  }
}

int main() {
  freopen("migong.in", "r", stdin);
  freopen("migong.out", "w", stdout);
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> mmap[i][j];
  visited[0][0] = true;
  search();
  cout << cnt;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
