#include <bits/stdc++.h>
using namespace std;

int fx1, fx2, fy1, fy2;
int arr[101][101];
int dx[12] = {-2, -2, -1, 1, 2, 2, 2, 2, 1, -1, -2, -2};
int dy[12] = {-1, -2, -2, -2, -2, -1, 1, 2, 2, 2, 2, 1};
int ans[101][101];

queue<tuple<int, int, int>> q;

void bfs() {
  memset(ans, -1, sizeof ans);
  ans[1][1] = 0;
  q.push({1, 1, 0});
  while (!q.empty()) {
    auto p = q.front();
    q.pop();
    for (int i = 0; i < 12; i++) {
      int x = get<0>(p) + dx[i], y = get<1>(p) + dy[i];
      if (x <= 0 || y <= 0 || x > 100 || y > 100 || ans[x][y] != -1) continue;
      ans[x][y] = get<2>(p) + 1;
      q.push({x, y, ans[x][y]});
      if (ans[fx1][fy1] > 0 && ans[fx2][fy2] > 0) {
        cout << ans[fx1][fy1] << '\n' << ans[fx2][fy2] << '\n';
        return;
      }
    }
  }
}

int main() {
  cin >> fx1 >> fy1 >> fx2 >> fy2;
  bfs();
  return 0;
}
