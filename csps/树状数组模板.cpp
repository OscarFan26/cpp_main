// Created By OscarFan
// TIME:  2023/5/2 10:30:58
// NAME:  树状数组模板.cpp

#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[100010];  // 原数组
int c[100010];  // 树状数组

inline int lowbit(int x) { return x & (-x); }

void update(int x, int y) {  // 单值修改
    for (; x <= n; x += lowbit(x)) c[x] += y;
}

int fun(int x) { // 查询区间[1, x] 的和
    int ans = 0;
    while (x > 0) {
        ans += c[x];
        x = x - lowbit(x);
    }
    return ans;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        update(i, a[i]);
    }
    for (int i = 1; i <= m; i++) {
        int op, x, y;
        cin >> op >> x >> y;
        if (op == 1) update(x, y);
        else cout << fun(y) - fun(x - 1) << endl;
    }
    return 0;
}