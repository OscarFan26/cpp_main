/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int arr[99][99], visited[99];
int que[99];
int n, m;
int places_went = 0;

void bfs(int x) {
    int r = 0, t = 1;
    que[0] = x;
    cout << x << " ";
    visited[x] = 1;
    while (r < t) {
        for (int i = 0; i < n; i++) {
            if ((arr[que[r]][i + 1]) && (!visited[i + 1])) {
                cout << i + 1 << " ";
                visited[i + 1] = 1;
                que[t]         = i + 1;
                t++;
            }
        }
        r++;
    }
}

int main() {
    // 图的广度优先搜索--输出搜索路径
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int s, e;
        cin >> s >> e;
        arr[s][e] = 1;
    }
    bfs(1);
    return 0;
}
