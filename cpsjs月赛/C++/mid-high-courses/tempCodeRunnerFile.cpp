/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int maps[31][31];
int visited[31][31];
int n, m;
int sx, sy, ex, ey;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int sum;
int mins = 2147483647;

void dfs(int x, int y) {
    if (x == ex && y == ey) {
        mins = min(mins, sum);
        return;
    }

    for (int i = 0; i <= 3; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx < 1 || xx > n || yy < 1 || yy > m) continue;
        if (visited[xx][yy] == 0) {
            visited[xx][yy] = 1;
            sum += maps[xx][yy];
            dfs(xx, yy);
            visited[xx][yy] = 0;
            sum -= maps[xx][yy];
        }
    }
}

int main() {
    cin >> n >> m >> sx >> sy >> ex >> ey;
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++) cin >> maps[i][j];
    if (sx == ex && sy == ey) {
        cout << maps[sx][sy] << endl;
        return 0;
    }
    visited[sx][sy] = 1;
    sum += maps[sx][sy];
    dfs(sx, sy);
    cout << mins << endl;
    return 0;
}