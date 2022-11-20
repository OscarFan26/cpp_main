/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int r, s;  // 长宽
// int sx, sy;  // 起点
char maps[31][31];
int visited[31][31];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
char visited_letters[27];
int sum;

bool appeared_befor(char c) {
    for (auto i : visited_letters) {
        if (i == c) return true;
    }
    return false;
}

void dfs(int x, int y) {
    // if (x == r && y == s) {
        // cout << sum << endl;
        // return;
    // }
    for (int i = 0; i <= 3; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx < 1 || xx > r || yy < 1 || yy > s) continue;
        if (visited[xx][yy] == 0 && !appeared_befor(maps[xx][yy])) {
            visited[xx][yy] = 1;
            sum++;
            visited_letters[maps[xx][yy] - 'A'] = maps[xx][yy];
            dfs(xx, yy);
            visited[xx][yy] = 0;
        }
    }
}

int main(){
    /*
    给你一些字谜，可以上下左右移动，但你不能移动到曾经你走过的字母（字母可重复），问你到走到 几个不相同的字母？
    */
    cin >> r >> s;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= s; j++) {
            cin >> maps[i][j];
        }
    }

    visited[1][1] = 1;
    dfs(1, 1);
    cout << sum << endl;
    return 0;
}
