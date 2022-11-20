/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int maps[101][101], book[101][101];
int eyy, exx, ex, ey;
int dx[12] = {-2, -1, 1, 2, 2, 2, 2, 1, -1, -2, -2, -2};
int dy[12] = {-2, -2, -2, -2, -1, 1, 2, 2, 2, 2, 1, -1};
bool flag = false;
int minstep = 0;

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
    que[tail].x = 1;
    que[tail].y = 1;
    que[tail].step = 0;
    tail++;
    book[1][1] = 1;
    while (head < tail)
    {
        for (int i = 0; i <= 11; i++)
        {
            int tx = que[head].x + dx[i];
            int ty = que[head].y + dy[i];
            if (tx >= 1 && tx <= 100 && ty >= 1 && ty <= 100 && book[tx][ty] == 0)
            {
                que[tail].x = tx;
                que[tail].y = ty;
                que[tail].step = que[head].step + 1;
                tail++;
                book[tx][ty] = 1;
            }
            if (tx == ex && ty == ey)
            {
                flag = true;
                minstep = que[tail - 1].step;
                return;
            }
        }
        head++;
    }
}

/*
给出三点坐标，表示初始点和两个终点
可以走 日 或 田
问需要几步
*/

int main()
{
    cin >> exx >> eyy >> ex >> ey;
    bfs(exx, eyy);
    int s1 = minstep;
    minstep = 0;
    bfs(ex, ey);
    cout << s1 << endl
         << minstep << endl;
    return 0;
}
