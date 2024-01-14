/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int m, n;
int maps[31][31];
int sx, sy;
int sum;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int head = 1, tail = 1;


bool isValid(int x, int y) {
    if (x < 1 || x > m || y < 1 || y > n) return false;
    if (maps[x][y] == 1) {
        maps[x][y] = 2;
        isValid(x, y+1);
        isValid(x+1, y);
        isValid(x, y-1);
        isValid(x - 1, y);
    }
    return true;
}

int main(){
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
    cin >> maps[i][j];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (maps[i][j] == 1) {
                isValid(i, j);
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}
