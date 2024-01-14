/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int solves = 0, n, m;
int cb[101][101];

void yuansuan(int x, int y) {
    if (x == n && y == m) {
        solves++;
        return;
    }
    if (x >= 0 && x <= n && y >= 0 && y <= m && cb[x][y] == 0) {
        cb[x][y] = 1;
        yuansuan(x + 1, y - 2);
        yuansuan(x + 2, y - 1);
        yuansuan(x + 2, y + 1);
        yuansuan(x + 1, y + 2);
        cb[x][y] = 0;
    }
}

int main(){
    // int n, m;
    cin >> n >> m;
    yuansuan(0, 0);
    cout << solves << endl;
    return 0;
}


