#include <bits/stdc++.h>
#define maxn 1000010
using namespace std;
int a[maxn], b[maxn];
int n, m, ans;
int d[maxn], x[maxn], y[maxn];
int ju(int mid) {
    memset(b, 0, sizeof(b));
    for (int i = 1; i <= mid; i++) {
        b[x[i]] += d[i];
        b[y[i] + 1] -= d[i];
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += b[i];
        if (sum > a[i]) return 0;
    }
    return 1;
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) { cin >> a[i]; }
    for (int i = 1; i <= m; i++) { cin >> d[i] >> x[i] >> y[i]; }
    int l = 1;
    int r = m;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (ju(mid) == 0) {
            ans = mid;
            r   = mid - 1;
        }
        else { l = mid + 1; }
    }
    if (ans == 0)
        cout << 0 << endl;
    else
        cout << -1 << endl << ans << endl;
    return 0;
}
