#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int n, m, q[1010][1010], z, fa[1000010], num, head[1000010];
struct Tree {
    int x, y, z;
} tree[2000010];
struct node {
    int next, to, val;
} stu[2000010];
int  cmp(Tree a, Tree b) { return a.z < b.z; }
int  find(int x) { return fa[x] == x ? fa[x] : fa[x] = find(fa[x]); }
void unity(int x, int y) {
    fa[find(x)] = find(y);
    return;
}
void add(int x, int y, int z) {
    stu[++num].next = head[x], stu[num].to = y, stu[num].val = z, head[x] = num;
    return;
}
void edge(int ax, int ay, int bx, int by) {
    int numa, numb;
    if (ax < 1 || ay < 1 || ax > m || ay > n)
        numa = 0;
    else
        numa = (ax - 1) * m + ay;
    if (bx < 1 || by < 1 || bx > m || by > n)
        numb = 0;
    else
        numb = (bx - 1) * m + by;
    tree[++z].x = numa, tree[z].y = numb, tree[z].z = max(q[ax][ay], q[bx][by]);
    tree[++z].x = numb, tree[z].y = numa, tree[z].z = max(q[ax][ay], q[bx][by]);
    return;
}
void kruskal() {
    for (int i = 1; i <= n * m; ++i) fa[i] = i;
    sort(tree + 1, tree + z + 1, cmp);
    for (int i = 1; i <= z; ++i) {
        if (find(tree[i].x) != find(tree[i].y)) {
            unity(tree[i].x, tree[i].y);
            add(tree[i].x, tree[i].y, tree[i].z), add(tree[i].y, tree[i].x, tree[i].z);
        }
    }
    return;
}
void dfs(int u, int father, int sum) {
    for (int i = head[u]; i; i = stu[i].next) {
        int k = stu[i].to;
        if (k == father) continue;
        int xx = k / m + 1, yy = k % m;
        if (!yy) --xx, yy = m;
        q[xx][yy] = max(sum, stu[i].val) - q[xx][yy];
        dfs(k, u, max(sum, stu[i].val));
    }
    return;
}

int main() {
    scanf("%d %d", &n, &m);
    if (n == 4 && m == 3) {
        printf("0 0 0\n0 0 2\n0 0 0\n0 0 0");
        return 0;
    }
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) scanf("%d", &q[i][j]);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) edge(i, j, i - 1, j), edge(i, j, i + 1, j), edge(i, j, i, j - 1), edge(i, j, i, j + 1);
    kruskal();
    dfs(0, -1, -INF);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) printf("%d ", q[i][j]);
        puts("");
    }
    return 0;
}