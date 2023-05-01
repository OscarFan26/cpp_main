// Created By OscarFan
// TIME:  2023/4/30 09:04:25
// NAME:  疯狂的馒头bzoj2054.cpp
// 利用并查集祖先相同位同一集合的特点可以跳过已经染色的节点

#include <bits/stdc++.h>

using namespace std;

int n, m, p, q;
int fa[100010], ans[100010];

int find(int x) { return fa[x] == x ? x : fa[x] = find(fa[x]); }

void paint(int l, int r, int color) {
    for (int i = find(l); i <= r; i = find(l)) {
        ans[i] = color;
        fa[i] = i + 1;
    }
}

int main() {
    cin >> n >> m >> p >> q;
    // 最后一个被染色后父节点会指向下一个数字
    for (int i = 0; i <= n + 1; i++) fa[i] = i;
    // 馒头颜色只和最后一次染色相关，倒着染色，被染色的馒头跳过
    for (int i = m; i >= 1; i--) {
        int l = (i * p + q) % n + 1;
        int r = (i * q + p) % n + 1;
        if (l > r) swap(l, r);
        paint(l, r, i);
    }

//    for (auto i: std::ranges::views::iota(1, n))
    for (int i = 1; i <= n; i++)
        cout << ans[i] << endl;
    return 0;
}