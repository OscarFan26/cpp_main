/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int a[50001], c[50001], n, s1[50001], s2[50001];

int lowbit(int x) { return x & (-x); }

void update(int x, int y) {
    for (int i = x; i <= 50000; i += lowbit(i)) c[i] += y;
}
int sum(int x) {
    int s = 0;
    for (int i = x; i > 0; i -= lowbit(i)) s += c[i];
    return s;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        update(a[i], 1);
        s1[i] = sum(a[i] - 1);
    }
    memset(c, 0, sizeof(c));
    for (int i = n; i >= 1; i--) {
        update(a[i], 1);
        s2[i] = sum(a[i] - 1);
    }
    int ans = 0;
    for (int k = 2; k <= n - 1; k++) ans += s1[k] * (n - k - s2[k]) + (k - 1 - s1[k]) * s2[k];
    cout << ans;
    return 0;
}
