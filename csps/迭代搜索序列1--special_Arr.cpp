/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int n, deep, a[110];

bool dfs(int k) {
    if (k > deep) {
        if (a[deep] == n)
            return true;
        else
            return false;
    }
    bool v[110] = { false };
    for (int i = k - 1; i >= 1; i--) {
        for (int j = k - 1; j >= 1; j--) {
            if (a[i] + a[j] <= a[k - 1]) break;
            if (a[i] + a[j] <= n && v[a[i] + a[j]] == false) {
                v[a[i] + a[j]] = true;
                a[k]           = a[i] + a[j];
                if (dfs(k + 1)) return true;
            }
        }
    }
    return false;
}

int main() {
    cin >> n;
    if (n == 1) cout << 1;
    deep = 1;
    a[1] = 1;
    while (true) {
        deep++;
        if (dfs(2)) {
            for (int i = 1; i <= deep; i++) cout << a[i] << " ";
            cout << endl;
            break;
        }
    }
    return 0;
}
