/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int arr[99][99], visited[99];
int n, m;
int places_went = 0;

void dfs(int x) {
    places_went++;
    cout << x << " ";
    if (places_went == n) return;
    for (int i = 0; i < n; i++) {
        if (arr[x - 1][i] != 0 && visited[i] != 1) {
            visited[i] = 1;
            dfs(i + 1);
        }
    }
}

int main() {
    // 无向图的深度优先搜索--输出搜索路径
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        arr[s - 1][e - 1] = 1;
        arr[e - 1][s - 1] = 1;
    }
    visited[0] = 1;
    dfs(1);
    return 0;
}
