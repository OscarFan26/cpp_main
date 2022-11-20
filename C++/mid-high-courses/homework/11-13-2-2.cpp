#include <iostream>
#include <vector>
using namespace std;

struct node
{
    int x;
    int y;
};
int maps[51][51];
struct node que[2501];
int head, tail;
int book[51][51];              
int sum = 0;                                         
int S = 1;
int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; 
int m, n, x, y, tx, ty;

void bfs(int x, int y)
{
    sum++;
    maps[x][y] = 0;
    head = 1;
    tail = 1;
    que[tail].x = x;
    que[tail].y = y;
    book[x][y] = 1;
    tail++;
    while (head < tail)
    {
        for (int k = 0; k <= 3; k++)
        {
            tx = que[head].x + dir[k][0];
            ty = que[head].y + dir[k][1];
            if (tx < 0 || tx >= m || ty < 0 || ty >= n)
                continue;
            if (maps[tx][ty] > 0 && book[tx][ty] == 0)
            {
                S += maps[tx][ty];
                maps[tx][ty] = 0;
                book[tx][ty] = 1;
                que[tail].x = tx;
                que[tail].y = ty;
                tail++;
            }
        }
        head++;
    }
}

int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> maps[i][j];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            if (maps[i][j]){
                bfs(i, j);
                cout << S << " ";
                S = 1;
            }
    }
    cout << endl << sum; 
    return 0;
}