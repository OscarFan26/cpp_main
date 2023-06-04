// Created By OscarFan
// TIME:  2023/6/4 17:32:34
// NAME:  最小生成树kruskal.cpp

#include <bits/stdc++.h>

using namespace std;

/*
 * kruskal算法:
 * 1. 读入m条边
 * 2. 根据权值，对边从小到大排序
 * 3. 使用边： （判断：图形是树，不是图）没有环，并查集，2个点是否在同一个集合中
 * 4. n-1条边，输出权值和即可
 * */

#define maxn 100005

struct Edge {
    int u, v, w;
} edge[maxn];

int n, m, fa[maxn];

inline bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int find(int x) {
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

void merge(int x, int y) {
    x = find(x);
    y = find(y);
    fa[x] = y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) fa[i] = i;
    for (int i = 1; i <= m; i++) cin >> edge[i].u >> edge[i].v >> edge[i].w;
    sort(edge + 1, edge + m + 1, cmp);
    int ans = 0, cnt = 0;
    for (int i = 1; i <= m; i++) {
        int x = edge[i].u, y = edge[i].v;
        if (find(x) == find(y)) continue;
        ans += edge[i].w;
        merge(x, y);
        if (cnt == n - 1) break;
    }
    cout << ans << endl;
    return 0;
}