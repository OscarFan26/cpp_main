#include <bits/stdc++.h>
using namespace std;
int fa[10001];
int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) fa[i] = i;
    int ans = 0;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        int fx = find(x), fy = find(y);
        if (fx != fy)
            fa[fx] = fy;
        else
            ans++;
    }

    cout << endl << ans << endl;
    return 0;
}
