/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

#define maxn 10005

struct Node {
    int l, r;
    int add;      // 区间修改的懒惰标记
    int maxx, s;  //[l,r]这个区间的最大值,s是区间的和
} tree[maxn * 4];

int a[maxn], n, m;

void build(int i, int l, int r) {  // [l,r]=n
#define ls i << 1
#define rs i << 1 | 1
    tree[i].l = l;
    tree[i].r = r;
    if (l == r) {  // 退出条件
        tree[i].maxx = tree[i].s = a[l];
        return;
    }
    int mid = (l + r) / 2;
    build(2 * i, l, mid);          // 左子树 n/2
    build(2 * i + 1, mid + 1, r);  // 右子树 n/2
    tree[i].maxx = max(tree[2 * i].maxx, tree[2 * i + 1].maxx);
    tree[i].s    = tree[2 * i].s + tree[2 * i + 1].s;
}

void pushdown(int i) {
    if (tree[i].add) {
        tree[2 * i].s += tree[i].add * (tree[2 * i].r - tree[2 * i].l + 1);
        tree[2 * i + 1].s += tree[i].add * (tree[2 * i + 1].r - tree[2 * i + 1].l + 1);
        tree[2 * i].add += tree[i].add;
        tree[2 * i + 1].add += tree[i].add;
        tree[i].add = 0;
    }
}

int ask(int i, int l, int r) {
    if (tree[i].l >= l && tree[i].r <= r) return tree[i].maxx;
    int mid = (tree[i].l + tree[i].r) / 2;
    int ans = -2147483648;
    if (l <= mid) ans = max(ans, ask(2 * i, l, r));
    if (r > mid) ans = max(ans, ask(2 * i + 1, l, r));
    return ans;
}

int ask1(int i, int l, int r) {
    if (tree[i].l >= l && tree[i].r <= r) return tree[i].s;
    pushdown(i);
    int mid = (tree[i].l + tree[i].r) / 2;
    int ans = 0;
    if (l <= mid) ans += ask1(2 * i, l, r);
    if (r > mid) ans += ask1(2 * i + 1, l, r);
    return ans;
}

void change(int i, int l, int r, int w) {
    if (tree[i].l >= l && tree[i].r <= r) {
        tree[i].s += w * (tree[i].r - tree[i].l + 1);
        tree[i].add += w;
        return;
    }
    pushdown(i);
    int mid = (tree[i].l + tree[i].r) / 2;
    if (l <= mid) change(2 * i, l, r, w);
    if (r > mid) change(2 * i + 1, l, r, w);
    tree[i].s = tree[2 * i].s + tree[2 * i + 1].s;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    for (int i = 1; i <= m; i++) {
        int  l, r, w;
        char op;
        cin >> op >> l >> r;
        if (op == 'Q') {
            cout << ask1(1, l, r);
            if (i != m) cout << " ";
        }
        else {
            cin >> w;
            change(1, l, r, w);
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
