/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int m, n;
int maps[101][101], book[101][101];
int sx, sy, ex, ey;
int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};
bool flag = false;
vector<int> steps;

struct node
{
    int x;
    int y;
    int step;
};

node que[101 * 101];
int head = 1, tail = 1;

void bfs(int ex, int ey)
{
    que[tail].x = ex;
    que[tail].y = ey;
    que[tail].step = 0;
    tail++;
    maps[ex][ey] = 0;
    book[ex][ey] = 1;
    while (head < tail)
    {
        for (int i = 0; i <= 7; i++)
        {
            int tx = que[head].x + dx[i];
            int ty = que[head].y + dy[i];
            if (tx >= 1 && tx <= m && ty >= 1 && ty <= n && book[tx][ty] == 0)
            {
                que[tail].x = tx;
                que[tail].y = ty;
                que[tail].step = que[head].step + 1;
                maps[tx][ty] = que[tail].step;
                tail++;
                book[tx][ty] = 1;
            }

        }
        head++;
    }
}

int main()
{
    // 广度优先搜索1
    // BFS
    // memset(maps, -1, 101 * 101 * 4);
    // for (int i = 0; i < 101; i++)
    // for (int j = 0; j <= 101; j++)
    //     maps[i][j] = -1;
    cin >> m >> n; // 行列
    cin >> sx >> sy;
    memset(maps, -1, m*n * 4);
    bfs(sx, sy);
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) cout << maps[i][j] << " "; 
        cout << endl;
    }
    return 0;
}
