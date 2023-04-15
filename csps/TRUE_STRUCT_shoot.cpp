/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int b[100001];

int main() {
    int n, m, a[1005] = {};
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0, k = 1;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            b[k] = a[i] + a[j];
            k++;
        }
    }
    sort(b + 1, b + k);
    int i = 1, j = k - 1;
    while (i <= j) {
        if (b[i] + b[j] > m)
            j--;
        else {
            ans = max(ans, b[i] + b[j]);
            i++;
        }
    }
    cout << ans;
    return 0;
}
