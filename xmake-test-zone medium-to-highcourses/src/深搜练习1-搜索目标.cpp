#include <bits/stdc++.h>

using namespace std;

// 深度优先搜索-地图
int maps[11][11];  // map
int n; // 边长
bool target_found = false; // 是否找到目标
int visited[11][11]; // 访问标记 1:已访问 0:未访问
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
    /**
     * @param int x: 开始搜索的x坐标
     * @param int y: 开始搜索的y坐标
     * @description 深度优先搜索
    **/

    if (maps[x][y] == 2) {
        target_found = true;
        return;
    }
    // 按照 上右下左 的顺序搜索 
    for (int i = 0; i <= 3; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        // 寻找 2
        if (nx >= 0 && nx < n && ny >= 0 && ny < n && maps[nx][ny] != 1 && visited[nx][ny] == 0) {
            visited[nx][ny] = 1;
            dfs(nx, ny);
            visited[nx][ny] = 0;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maps[i][j];
        }
    }
    // 特殊情况
    if (maps[0][0] == 1) {
        cout << "No" << endl;
        return 0;
    }
    if (maps[0][0] == 2) {
        cout << "Yes" << endl;
        return 0;
    }

    visited[0][0] = 1;
    dfs(0, 0);
    if (target_found)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
