/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int a[500010], n, m, datas, l, r, t, x, k, c[5000010];

int lowbit(int x) { return x & (-x); }

void update(int x, int value) {
    while (x <= n) {
        c[x] += value;
        x += lowbit(x);
    }
}

int getNum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += c[x];
        x -= lowbit(x);
    }
    return sum;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        update(i, a[i] - a[i - 1]);
    }
    while (m--) {
        cin >> t;
        if (t == 1) {
            cin >> l >> r >> k;
            update(l, k);
            update(r + 1, -k);
        }
        else {
            cin >> datas;
            cout << getNum(datas) << endl;
        }
    }
    return 0;
}
