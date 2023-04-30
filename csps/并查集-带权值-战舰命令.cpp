// Created By OscarFan
// TIME:  2023/4/16 11:09:18
// NAME:  并查集-带权值-战舰命令.cpp

#include <bits/stdc++.h>
using namespace std;

// i艘战舰，每艘战舰有一个编号，编号为1~i
// 有m条命令，命令有两种：
// M i j: 将第i艘所在列的所有战舰排在第j艘之后
// C i j: i j 两艘战舰是否在同一列 （不是：-1，是：1）

[[maybe_unused]] int fa[30010], dist[30010], sizes[30010];

int find(int x) {
    if (fa[x] == x) return x;
    int pre = fa[x];
    int t   = find(pre);
    fa[x]   = t;
    dist[x] += dist[pre];
    return t;
}

void merge(int x, int y) {
    int fx = find(x), fy = find(y);
    fa[fx] = fy;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        fa[i]    = i;
        sizes[i] = 1;
    }
    char ch;
    int  x, y;
    for (int i = 1; i <= m; i++) {
        cin >> ch >> x >> y;
        int fx = find(x), fy = find(y);
        if (ch == 'M') {
            merge(fx, fy);
            dist[fx] = sizes[fy];
            sizes[fy] += sizes[fx];
        }
        else {
            if (fx == fy)
                cout << abs(dist[x] - dist[y]) - 1 << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}