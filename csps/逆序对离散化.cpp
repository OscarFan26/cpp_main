/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;
struct node {
    int num, pos;
} t[100010];

int n;
int a[100010], b[100010], c[100010];

bool cmp(node x, node y) { return x.num < y.num; }

int lowbit(int x) { return x & (-x); }

void update(int x, int y) {
    for (int i = x; i <= n; i += lowbit(i)) c[i] += y;
}

int sum(int x) {
    int ans = 0;
    for (int i = x; i > 0; i -= lowbit(i)) ans += c[i];
    return ans;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        t[i].num = a[i];
        t[i].pos = i;
    }
    sort(t + 1, t + n + 1, cmp);
    for (int i = 1; i <= n; i++) b[t[i].pos] = i;
    int ans = 0;
    for (int i = n; i >= 1; i--) {
        ans += sum(b[i] - 1);
        update(b[i], 1);
    }
    return 0;
}
