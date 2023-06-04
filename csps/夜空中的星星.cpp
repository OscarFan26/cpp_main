// Created By OscarFan
// TIME:  2023/5/2 11:35:09
// NAME:  夜空中的星星.cpp

#include <bits/stdc++.h>

using namespace std;

int c[100010], l[100010];
int n, m;

struct node {
    int x, y;
} b[100010];

inline bool cmp(node a, node b) {
    return a.x == b.x ? a.y < b.y : a.x < b.x;
}

inline int lowbit(int x) { return x & (-x); }

int sum(int x) {
    int ans = 0;
    for (int i = x; i > 0; i -= lowbit(i)) ans += c[i];
    return ans;
}

void update(int x) {
    for (int i = x; i <= n; i += lowbit(i)) c[i]++;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> b[i].x >> b[i].y;
    sort(b + 1, b + n + 1, cmp);  // 排序
    for (int i = 1; i < n; i++) {
        l[sum(b[i].y + 1)]++;  // 记录y+1的左边有多少恒星
        update(b[i].y + 1);
    }
    for (int i = 0; i < n; i++) cout << l[i] << endl;
    return 0;
}