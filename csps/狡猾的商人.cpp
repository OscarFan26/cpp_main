// Created By OscarFan
// TIME:  2023/4/30 10:13:38
// NAME:  狡猾的商人.cpp

#include <bits/stdc++.h>
//#include <ranges>

using namespace std;

// HNOI2005

int w, n, m;

int fa[100010]; // 父节点
int d[100010]; // 到根节点的距离

int find(int x) {
    if (fa[x] == x) return x;
    int t = find(fa[x]);
    d[x] += d[fa[x]];
    return fa[x] = t;
}

int merge(int x, int y, int v) {
    int fx = find(x);
    int fy = find(y);
    if (fx == fy) //  x和y属于同集合，验证v是否正确
        return d[x] - d[y] == v;
    if (fx < fy) {
        d[fx] = d[y] + v - d[x];
        return 1;
    } else {
        fa[fy] = fx;
        d[fy] = d[x] - v - d[y];
        return 1;
    }
}

int main() {
    cin >> w;
    while (w--) {
        cin >> n >> m;
        int flag = 1;
        memset(d, 0, sizeof(d));
        for (int i = 0; i <= n; i++)
//        for (auto i: views::iota(0, n))
            fa[i] = i;
        int s, t, v;
        for (int _ = 1; _ <= m; _++) {
//        for (auto _: views::iota(1, m)) {
            cin >> s >> t >> v;
            if (flag == 0) continue;
            if (!merge(s - 1, t, v)) flag = 0;
        }
        if (flag) cout << "true" << endl;
        else cout << "false" << endl;
    }
    return 0;
}