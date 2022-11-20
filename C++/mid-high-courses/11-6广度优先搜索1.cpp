/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int m, n;
int maps[101][101], book[101][101];
int sx, sy, ex, ey;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
bool flag = false;
int minstep = 0;

struct node {
    int x;
    int y;
    int step;
};

node que[101 * 101];
int head = 1, tail = 1;

void bfs() {
    que[tail].x = sx;
    que[tail].y = sy;
    que[tail].step = 0;
    tail++;
    book[sx][sy] = 1;
    while (head < tail) {
        for (int i = 0; i <= 3; i++) {
            int tx = que[head].x + dx[i];
            int ty = que[head].y + dy[i];
            if (tx >= 1 && tx <= m && ty >= 1 && ty <= n && maps[tx][ty] == 0 && book[tx][ty] == 0) {
                que[tail].x = tx;
                que[tail].y = ty;
                que[tail].step = que[head].step + 1;
                tail++;
                book[tx][ty] = 1;
            
            } 
            if (tx == ex && ty == ey) {
                flag = true;
                minstep = que[tail - 1].step;
                return;
            }
        }
        head++;
    }
}

int main(){
    // 广度优先搜索1
    // BFS
    cin >> m >> n;  // 行列
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maps[i][j];
        }
    }
    cin >> sx >> sy >> ex >> ey;
    bfs();
    cout << minstep << endl;
    return 0;
}



