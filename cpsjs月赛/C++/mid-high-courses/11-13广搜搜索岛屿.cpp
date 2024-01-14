/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int m, n; // 行列
int maps[31][31];
int visited[31][31];
int sum = 1;
int sx, sy, ex, ey;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

struct node {
    int x;
    int y;  
    int step;
};

bool flag = false;
node que[101 * 101];
int head = 1, tail = 1;

void bfs()
{
    que[tail].x = sx;
    que[tail].y = sy;
    que[tail].step = 0;
    tail++;
    visited[sx][sy] = 1;
    while (head < tail)
    {
        for (int i = 0; i <= 3; i++)
        {
            int tx = que[head].x + dx[i];
            int ty = que[head].y + dy[i];
            if (tx >= 1 && tx <= m && ty >= 1 && ty <= n && maps[tx][ty] == 1 && visited[tx][ty] == 0)
            {
                visited[tx][ty] = 1;
                que[tail].x = tx;
                que[tail].y = ty;
                que[tail].step = que[head].step + 1;
                tail++;
                sum++;
            }
        }
        head++;
    }
}

int main(){
    // 通过广搜搜索陆地（1）
    cin >> m >> n >> sx >> sy;
    for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
        cin >> maps[i][j];

    bfs();
    cout << sum;
    return 0;
}
