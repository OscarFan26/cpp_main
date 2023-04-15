/*小明在玩一个棋盘游戏。一个 
 行 
 列的棋盘，每个格子是黑色或者白色。一个格子可以移动到相邻的格子，两个格子相邻是指它们有一条公共的边。移动到同色的格子代价为 
，移动到不同色的格子代价为 
。

给定起点和终点，请你计算一下移动的最小代价。*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
const int maxn = 1005;
const int inf = 0x3f3f3f3f;
int n, m;
int sx, sy, ex, ey;
char s[maxn][maxn];
int dis[maxn][maxn];
int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};
struct node {
    int x, y;
    node(int x = 0, int y = 0) : x(x), y(y) {}
};
bool check(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > m) return false;
    return true;
}
void bfs() {
    queue<node> q;
    q.push(node(sx, sy));
    dis[sx][sy] = 0;
    while (!q.empty()) {
        node now = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int x = now.x + dir[i][0];
            int y = now.y + dir[i][1];
            if (check(x, y) && dis[x][y] == inf) {
                if (s[x][y] == s[now.x][now.y])
                    dis[x][y] = dis[now.x][now.y];
                else
                    dis[x][y] = dis[now.x][now.y] + 1;
                q.push(node(x, y));
            }
        }
    }
}
int main() {
freopen("board.in", "r", stdin);
freopen("board.out", "w", stdout);
while (~scanf("%d%d", &n, &m)) {
        memset(dis, inf, sizeof(dis));
        for (int i = 1; i <= n; i++) scanf("%s", s[i] + 1);
        scanf("%d%d%d%d", &sx, &sy, &ex, &ey);
        bfs();
        printf("%d\n", dis[ex][ey]);
}
fclose(stdin);
fclose(stdout);
    return 0;
}
