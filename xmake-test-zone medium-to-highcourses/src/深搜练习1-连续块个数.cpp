#include <bits/stdc++.h>
using namespace std;

int n, m;
int maps[101][101];
int visited[101][101];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
    for (int i = 0; i <= 3; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && maps[nx][ny] != 1 && visited[nx][ny] == 0) {
            visited[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> maps[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (maps[i][j] == 0 && visited[i][j] == 0) {
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

