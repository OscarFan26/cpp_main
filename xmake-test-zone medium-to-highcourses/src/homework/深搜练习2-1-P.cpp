/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int n, m;
char maps[31][31];
int visited[31][31];
int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[8] = {1, 0, -1, 1, -1, 1, 0, -1};

void dfs(int x, int y)
{   
    // 上下左右 左前 右前 左后 右后 8个方向搜索
    for (int i = 1; i <= 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (ny < 1 || ny > n || nx < 1 || nx > m) continue;
        if (maps[ny][nx] == '.' && visited[ny][nx] == 0) {
            visited[ny][nx] = 1;
            dfs(ny, nx);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maps[i][j];
        }
    }
    int ans;
    dfs(0, 0);
    for (int i = 0; i < m; i++)
    
        for (int j = 0; j < n; j++)
        
            if (visited[i][j] == 1) 
                ans++;
    
    cout << ans << endl << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << maps[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}