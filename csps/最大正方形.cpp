
#include <bits/stdc++.h>
using namespace std;

using ll [[maybe_unused]] = long long;

const int maxn = 200;
int       a[maxn][maxn], d[maxn][maxn];

auto main() -> int {
    int m;
    int n;
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) { cin >> a[i][j]; }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 1) { d[i][j] = min(min(d[i][j - 1], d[i - 1][j]), d[i - 1][j - 1]) + 1; }
            ans = max(ans, d[i][j]);
        }
    }
    cout << ans << '\n';
    return 0;
}