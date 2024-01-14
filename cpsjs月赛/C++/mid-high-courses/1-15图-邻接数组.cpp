/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 无向图：通过输入每个节点可到节点，生成这个图的邻接数组
    int n, m;  // 节点数；边数
    cin >> n >> m;
    int arr[99][99] = {};
    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        arr[s - 1][e - 1] = 1;
        arr[e - 1][s - 1] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { cout << arr[i][j] << " "; }
        cout << endl;
    }
    return 0;
}
