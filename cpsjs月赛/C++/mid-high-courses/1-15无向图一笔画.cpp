/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int arr[99][99];
int degree[99];
int path[99];
int m, n, nodes = 0;
int l = 0;

void search(int x) {
    for (int i = 0; i < n; i++) {
        if (arr[x][i+1]) {
            arr[i+1][x] = arr[x][i+1] 
                                        = 0;
            search(i+1);
        }
    }
    path[++l] = x;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int s, e;
        cin >> s >> e;
        arr[s][e] = 1;
        arr[e][s] = 1;
        ++degree[s];
        ++degree[e];
    }
    //
    int crucial_points = 0;
    int start          = 1;
    for (int i = 0; i < n; i++) {
        if (degree[i+1] % 2) {
            start = i + 1;
            crucial_points++;
        }
    }
    //
    if (crucial_points == 0 || crucial_points == 2) {
        l = 0;
        search(start);
        for (int i = 0; i < l; i++) cout << path[i + 1] << " ";
        cout << endl;
    }
    else
        cout << -1;
    return 0;
}
