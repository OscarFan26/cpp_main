// Created By OscarFan
// TIME:  2023/4/16 10:40:04
// NAME:  并查集-信仰问题.cpp

#include <bits/stdc++.h>
using namespace std;

int fa[500005];

int find(int x) {
    if (fa[x] == x) return x;
    return fa[x] = find(fa[x]);  // 路径压缩
}

void merge(int x, int y) {
    x     = find(x);
    y     = find(y);
    fa[x] = y;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) fa[i] = i;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x = find(x);
        y = find(y);
        if (x != y) merge(x, y);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (fa[i] == i) ans++;
    }
    cout << ans << endl;
    return 0;
}