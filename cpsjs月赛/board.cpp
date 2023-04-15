/* 题目描述
小明在玩一个棋盘游戏。一个 
 行 
 列的棋盘，每个格子是黑色或者白色。一个格子可以移动到相邻的格子，两个格子相邻是指它们有一条公共的边。移动到同色的格子代价为 
，移动到不同色的格子代价为 
。

给定起点和终点，请你计算一下移动的最小代价。

输入
多组测试数据。

每组测试数据的第一行两个整数 
。

后续 
 行，每行 
 个字符的一个字符串，'B' 表示黑色格子，'W' 表示白色格子。

最后一行四个整数 
，表示起点在第 
 行 
 列，终点在第 
 行 
 列。

 表示没有更多的测试数据。

*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
const int INF = 0x3f3f3f3f;
int n, m;
int a[N][N];
int dp[N][N];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
struct node {
  int x, y;
  node() {}
  node(int x, int y) : x(x), y(y) {}
};
int bfs() {
  queue<node> q;
  q.push(node(1, 1));
  dp[1][1] = 0;
  while (!q.empty()) {
    node now = q.front();
    q.pop();
    for (int i = 0; i < 4; i++) {
      int x = now.x + dx[i];
      int y = now.y + dy[i];
      if (x >= 1 && x <= n && y >= 1 && y <= m) {
        if (a[x][y] == a[now.x][now.y]) {
          if (dp[x][y] > dp[now.x][now.y]) {
            dp[x][y] = dp[now.x][now.y];
            q.push(node(x, y));
          }
        } else {
          if (dp[x][y] > dp[now.x][now.y] + 1) {
            dp[x][y] = dp[now.x][now.y] + 1;
            q.push(node(x, y));
          }
        }
      }
    }
  }
  return dp[n][m];
}
int main() {
  while (scanf("%d%d", &n, &m) != EOF) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        char c;
        cin >> c;
        if (c == 'B') a[i][j] = 1;
        if (c == 'W') a[i][j] = 0;
      }
    }
    int x1, x2, y1, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        dp[i][j] = INF;
      }
    }
    printf("%d ", bfs());}}