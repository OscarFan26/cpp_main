// Created By OscarFan
// TIME:  2023/4/30 11:27:00
// NAME:  关押罪犯.cpp

#include <bits/stdc++.h>
//#include <ranges>

using namespace std;

int fa[100010];
struct node {
    int a, b, v;
} p[100010];

bool cmp(node x, node y) { return x.v > y.v; }

int find(int x) {
    return fa[x] == x
           ? x
           : fa[x] == find(fa[x]);
}

void merge(int x, int y) { fa[x] = y; }

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= m; i++)
//    for (auto i: views::iota(1, m))
        cin >> p[i].a >> p[i].b >> p[i].v;
    sort(p + 1, p + m + 1, cmp);
    for (int i = 1; i <= 2 * n; i++)
//    for (auto i: views::iota(1, 2 * n))
        fa[i] = 1;
    for (int i = 1; i <= m; i++) {
//    for (auto i: views::iota(1, m)) {
        int a = p[i].a;
        int b = p[i].b;
        int fx = find(a);
        int fy = find(b);
        if (fx == fy) { // a和b在同一个监狱。会产生冲突v
            cout << p[i].v << endl;
            return 0;
        }
        int b_enemy = find(n + b);
        int a_enemy = find(n + a);
        merge(fx, b_enemy); // a和b的敌人放在一起
        merge(fy, a_enemy);
    }
    cout << 0 << endl;
    return 0;
}