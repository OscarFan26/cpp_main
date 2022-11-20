#include <bits/stdc++.h>
using namespace std;

int n;
int maps[101][101];
int visited[101][101];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
bool target_found = false;
int x, y, tx, ty;  // 起点坐标，终点坐标

void dfs(int x, int y, int tx, int ty) {
    // 从起点到终点
    if (x == tx && y == ty) {
        target_found = true;
        return;
    }
    for (int i = 0; i <= 3; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && maps[nx][ny] != 0 && visited[nx][ny] == 0) {
            visited[nx][ny] = 1;
            dfs(nx, ny, tx, ty);
            visited[nx][ny] = 0;
        }
    }
}


int main() {
    // 先输入n,表示地图边长
    // 再输入n*n个数,表示地图，其中1表示可以走，0表示不可走
    // 再输入两个数，表示起点位置
    // 最后输入两个数，表示目标位置
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> maps[i][j];
        }
    }
    cin >> x >> y;
    cin >> tx >> ty;
    visited[x][y] = 1;
    dfs(x, y, tx, ty);
    if (target_found)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}
